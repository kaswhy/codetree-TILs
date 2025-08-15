#include <iostream>
#include <climits>
#include <cmath>

using namespace std;

int n;
int A[100];

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> A[i];
    }

    int min_dist = INT_MAX;
    for(int i = 0; i<n; i++) {
        int now = 0;

        for(int j = 0; j<n; j++) {
            if(j == i) continue;
            now += ((abs) (j - i)) * A[j];
        }

        if(now < min_dist) min_dist = now; 
    }

    cout << min_dist;

    return 0;
}