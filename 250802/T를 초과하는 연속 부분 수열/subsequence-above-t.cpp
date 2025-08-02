#include <iostream>

using namespace std;

int n, t;
int arr[1000];

int main() {
    cin >> n >> t;

    int tmp = 0, maxtmp = 0;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        
        if(arr[i] <= t) {
            tmp = 0;
            continue;
        }

        if(i != 0 && (arr[i - 1] >= arr[i])) {
            tmp = 1;
            continue;
        }
        tmp++;
        if(tmp > maxtmp) maxtmp = tmp;
    }


    cout << maxtmp;

    return 0;
}