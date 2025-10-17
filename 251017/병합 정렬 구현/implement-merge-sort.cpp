#include <iostream>
#include <vector>

using namespace std;

int n;
int arr[100000];
vector<int> v(n, 0);

void merge(int* arr, int low, int mid, int high) {
    int i = low,  j = mid + 1, k = low;

    while(i <= mid && j <= high) {
        if(arr[i] < arr[j]) {
            v[k] = arr[i];
            k++; i++;
            continue;
        }
        v[k] = arr[j];
        k++; j++;
    }

    while(i <= mid) {
        v[k] = arr[i];
        k++; i++;
    }

    while(j<= high) {
        v[k] = arr[j];
        k++; j++;
    }

    for (int t = low; t <= high; ++t) arr[t] = v[t];
}

void merge_sort(int* arr, int low, int high) {
    if (low < high) {
        int mid = (low + high) / 2;
        merge_sort(arr, low, mid);
        merge_sort(arr, mid+1, high);
        merge(arr, low, mid, high);
    }
}

int main() {
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    v.resize(n, 0);
    merge_sort(arr, 0, n-1);

    for(int i = 0; i<n; i++) {
        cout << v[i] << " ";
    }

    return 0;
}
