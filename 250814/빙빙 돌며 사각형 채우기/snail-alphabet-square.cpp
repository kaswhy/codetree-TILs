#include <iostream>

using namespace std;

int n, m;

int dx[4] = {0, 1, 0, -1};
int dy[4] = {1, 0, -1, 0};

char grid[100][100];

bool inRange(int x, int y) {
    return (0 <= x && x < n) && (0 <= y && y < m) && (grid[x][y] == 0);
}

int main() {
    cin >> n >> m;

    int x = 0, y = 0, dir = 0, now = 0;

    grid[x][y] = 'A' + now % 26;
    now++;

    for(int i = 1; i< n*m; i++) {
        while(true) {
            int nx = x + dx[dir];
            int ny = y + dy[dir];

            if(!inRange(nx, ny) || grid[nx][ny] != 0) {
                dir = (dir + 1) % 4;
                continue;
            } else {
                grid[nx][ny] = 'A' + now % 26;
                x = nx;
                y = ny;
                now++;
                break;
            }
        }
    }

    for(int i = 0; i<n; i++) {
        for(int j = 0; j<m; j++) {
            cout << grid[i][j] << " ";
        }
        cout << "\n";
    }

    return 0;
}
