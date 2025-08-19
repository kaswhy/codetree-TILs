#include <iostream>
#include <climits>

using namespace std;

int n;
int a[1003];

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int min_dist = INT_MAX;
    for(int i = 0; i<n; i++) { // 모일 방
        int now = 0;
        for(int j = 0; j<n; j++) {
            if(i == j) continue;
            if(i > j) {
                now += ((n - i + j) * a[j]);
                continue;
            }
            now += ((j - i) * a[j]);
        }
        if(now < min_dist) min_dist = now;
    }

    cout << min_dist;

    return 0;
}