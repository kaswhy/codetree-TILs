#include <iostream>

using namespace std;

int N;
int arr[1000];

int main() {
    cin >> N;

    int tmp = 1, maxtmp = 0;
    for (int i = 0; i < N; i++) {
        cin >> arr[i];
        if(i == 0 || arr[i] != arr[i-1]){
            if(tmp > maxtmp) {
                maxtmp = tmp;
                tmp = 0;
                continue;
            }
        }
        tmp++;
    }

    if(tmp > maxtmp) maxtmp = tmp;

    cout << maxtmp;

    return 0;
}