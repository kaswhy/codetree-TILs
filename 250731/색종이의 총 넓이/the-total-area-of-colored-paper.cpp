#include <iostream>
#include <vector>

using namespace std;

int N;

int main() {
    cin >> N;

    vector<vector<int>> v(201, vector<int>(201, 0));
    for (int i = 0; i < N; i++) {
        int x, y;
        cin >> x >> y;

        for(int j = x; j<x+8; j++) {
            for(int k = y; k<y+8; k++) {
                v[j +100][k + 100]++;
            }
        }
    }

    int cnt = 0;
    for(int i = 0; i<201; i++) {
        for(int j = 0; j<201; j++) {
            if(v[i][j]) cnt++;
        }
    }

    cout << cnt;

    return 0;
}