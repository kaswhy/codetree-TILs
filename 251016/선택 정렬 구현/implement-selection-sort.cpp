#include <iostream>

using namespace std;

int n;
int arr[100];

int main() {
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    for(int i = 0; i<n-1; i++) {
        int min_idx = i+1;
        for(int j = i+1; j<n; j++){
            if(arr[j] < arr[min_idx]) {
                min_idx = j;
            }
        }
        if(arr[i] > arr[min_idx]) {
            int tmp = arr[i];
            arr[i] = arr[min_idx];
            arr[min_idx] = tmp;
        }
    }

    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
