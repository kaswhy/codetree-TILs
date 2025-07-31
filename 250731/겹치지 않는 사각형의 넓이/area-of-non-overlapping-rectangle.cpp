#include <iostream>
#include <vector>

using namespace std;


int main() {

    vector<vector<int>> v(2001, vector<int>(2001, 0));
    for(int i = 1; i<=3; i++) {
        int x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >> y2;

        for(int j = x1; j<x2; j++) {
            for(int k = y1; k<y2; k++) {
                v[j + 1000][k + 1000] = i;
            }
        }
    }

    int cnt = 0;
    for(int i = 0; i<2001; i++) {
        for(int j = 0; j<2001; j++) {
            if(v[i][j] == 1 || v[i][j] == 2) cnt++;
        }
    }

    cout << cnt;

    return 0;
}