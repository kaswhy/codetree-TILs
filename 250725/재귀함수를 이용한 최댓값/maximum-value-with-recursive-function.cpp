#include <iostream>

using namespace std;

int n;
int arr[100];

int maxElem(int n) {
    if(n == 0) {
        return arr[n];
    }
    int now = maxElem(n-1);
    return now > arr[n] ? now : arr[n];
}

int main() {
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << maxElem(n-1);

    return 0;
}