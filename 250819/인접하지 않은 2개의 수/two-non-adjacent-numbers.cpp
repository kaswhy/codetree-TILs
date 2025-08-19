#include <iostream>
#include <climits>

using namespace std;

int n;
int numbers[100];

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> numbers[i];
    }

    int max_cnt = INT_MIN;
    for(int i = 0; i<n -2; i++){
        for(int j = i+2; j <n; j++) {
            int now = numbers[i] + numbers[j];
            if(now > max_cnt) max_cnt = now;
        }
    }

    cout << max_cnt;

    return 0;
}