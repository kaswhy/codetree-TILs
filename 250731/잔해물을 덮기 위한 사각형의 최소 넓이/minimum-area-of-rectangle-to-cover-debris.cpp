#include <iostream>
#include <vector>

using namespace std;


int main() {

    vector<vector<int>> v(2001, vector<int>(2001,0));
    for(int i = 1; i>=0; i--) {
        int x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >> y2;

        for(int j = x1; j < x2; j++) {
            for(int k = y1; k < y2; k++) {
                v[j + 1000][k + 1000] = i;
            }
        }
    }

    int row_min = 2001, row_max = -1, col_min = 2001, col_max = -1;
    for(int i = 0; i<2001; i++) {
        for(int j = 0; j<2001; j++) {
            if(v[i][j]) {
                if(i < row_min) row_min = i;
                if(i > row_max) row_max = i;
                if(j < col_min) col_min = j;
                if(j > col_max) col_max = j;
            }
        }
    }

    if(row_min == 2001 && row_max == -1 && col_min == 2001 && col_max == -1) {
        cout << 0;
        return 0;
    }
    cout << (row_max - row_min + 1) * (col_max - col_min + 1);

    return 0;
}