#include <iostream>
#include <vector>

using namespace std;

int n;

int main() {
    cin >> n;

    vector<vector<int>> v(201, vector<int>(201, 0));
    for (int i = 0; i < n; i++) {
        int x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >> y2;

        for(int j = x1; j < x2; j++) {
            for(int k = y1; k < y2; k++) {
                v[j  + 100][k + 100] = i % 2;
            }
        }
    }

    int cnt = 0;
    for(int i = 0; i<201; i++) {
        for(int j = 0; j < 201; j++) {
            if(v[i][j] == 1) cnt++;
        }
    }

    cout << cnt;

    return 0;
}