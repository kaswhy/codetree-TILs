#include <iostream>
#include <climits>
#include <cmath>

using namespace std;

int N, H, T;
int arr[100];

int main() {
    cin >> N >> H >> T;
    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }

    int min_cnt = INT_MAX;
    for(int i = 0; i<=N-T; i++) {
        int now = 0;
        for(int j = i; j<i + T; j++) {
            now += abs(arr[j] - H);
        }
        if(now < min_cnt) min_cnt = now;
    }

    cout << min_cnt;

    return 0;
}