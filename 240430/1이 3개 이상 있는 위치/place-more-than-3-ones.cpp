#include <iostream>
#include <vector>
using namespace std;

bool isRange (int x, int y, int n){
    if (x < 0 || x >= n || y < 0 || y >= n)
        return false;
    return true;
}

int dx[4] = {0, -1, 0, 1};
int dy[4] = {1, 0, -1, 0};

int main() {
    int n, cnt = 0;
    cin >> n;

    vector<vector<int>> v (n, vector<int> (n));

    for(int i = 0; i<n; i++){
        for(int j = 0; j<n; j++){
            cin >> v[i][j];
        }
    }

    for(int i = 0; i<n; i++){
        for(int j = 0; j<n; j++){
            int tmp = 0;
            for(int k = 0; k<4; k++){
                int nx = i + dx[k];
                int ny = j + dy[k];

                if(isRange(nx, ny, n) && v[nx][ny] == 1){
                    tmp ++;
                }
            }
            if (tmp >= 3){
                cnt++;
            }
        }
    }

    cout << cnt;
    return 0;
}