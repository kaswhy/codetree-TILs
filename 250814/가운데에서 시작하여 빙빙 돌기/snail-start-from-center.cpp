#include <iostream>

using namespace std;

int n;
int grid[100][100];

int dx[4] = {0, -1, 0, 1};
int dy[4] = {1, 0, -1, 0};

bool inRange(int x, int y) {
    return (0 <= x && x < n) && (0 <= y && y < n);
}

int main() {
    cin >> n;

    int x = n/2, y = n/2, now = 1, dir = 0;

    grid[x][y] = now;
    now++;

    for(int i = 1; i<n*n; i++) {
        for(int j = 0; j<4; j++) {
            int nx = x + dx[dir];
            int ny = y + dy[dir];

            if(inRange(nx, ny) && grid[nx][ny] == 0) {
                grid[nx][ny] = now;
                now++;
                x = nx;
                y = ny;
                dir = (dir + 1) % 4;
                break;
            } else {
                dir--;
                dir = (dir < 0) ? (dir % 4) + 4 : dir % 4;
            }
        }
    }

    for(int i = 0; i<n; i++) {
        for(int j = 0; j<n; j++) {
            cout << grid[i][j] << " ";
        }
        cout << "\n";
    }

    return 0;
}
