#include <iostream>

using namespace std;

int n, m;

int dx[4] = {1, 0, -1, 0}; 
int dy[4] = {0, 1, 0, -1}; 
int v[100][100];

bool inRange(int x, int y) {
    return (0 <= x && x < n) && (0 <= y && y < m) && (v[x][y] == 0);
}

int main() {
    cin >> n >> m;

    int dir = 0, x = -1, y = 0, now = 0;
    while (now < n*m) {
        int nx = x + dx[dir];
        int ny = y + dy[dir];

        if(!inRange(nx, ny))  {
            dir = (dir + 1) % 4;
            continue;
        }

        v[x][y] = now;
        now++;
        x = nx;
        y = ny;
    }
    v[x][y] = now;

    for(int i = 0; i<n; i++) {
        for(int j = 0; j<m; j++) {
            cout << v[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}