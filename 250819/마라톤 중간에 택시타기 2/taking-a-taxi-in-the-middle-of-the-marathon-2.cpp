#include <iostream>
#include <climits>
#include <cmath>

using namespace std;

int n;
int x[100];
int y[100];

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> x[i] >> y[i];
    }

    int min_dist = INT_MAX;
    for(int i = 1; i < n-1; i++) {
        int start = 0, now = 0;
        for(int j = 1; j<n; j++) {
            if(i == j) {
                continue;
            }
            now += (abs(x[j] - x[start]) + abs(y[j] - y[start]));
            start = j;
        }
        if(now < min_dist) min_dist = now;
    }

    cout << min_dist;

    return 0;
}