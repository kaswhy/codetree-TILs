#include <iostream>
#include <vector>
using namespace std;

bool isRange(int x, int y, int n, int m){
    if(x < 0 || x >= n || y < 0 || y >= m)
        return false;
    return true;
}

int dx[4] = {0, 1, 0, -1};
int dy[4] = {1, 0, -1, 0};

int main() {
    int n, m;
    cin >> n >> m;

    vector<vector<int>> v (n, vector<int> (m, 0));
    int x = 0, y = 0, dir = 0;

    v[0][0] = 1;
    for(int i = 2; i<= n*m; i++){
        int nx = x + dx[dir];
        int ny = y + dy[dir];

        if(isRange(nx, ny, n, m) && (v[nx][ny]==0)){
            x = nx;
            y = ny;
            v[x][y] = i;
        }
        else {
            dir = (dir + 1) % 4;
            i--;
        }
    }

    for(int i = 0; i<n; i++){
        for(int j = 0; j<m; j++){
            cout << v[i][j] << " ";
        }
        cout << "\n";
    }
    
    return 0;
}