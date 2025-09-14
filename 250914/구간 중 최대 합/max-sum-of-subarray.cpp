#include <iostream>

using namespace std;

int n, k;
int arr[100];

int main() {
    cin >> n >> k;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int max_count = 0;
    for(int i = 0; i<=n-k; i++) {
        int tmp = 0;
        for(int j = 0; j<k; j++) {
            tmp += arr[i + j];
        }
        if(tmp > max_count) max_count = tmp;
    }

    cout << max_count;

    return 0;
}