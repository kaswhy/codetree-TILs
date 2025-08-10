#include <iostream>

using namespace std;

int n;
char grid[1000][1000];
int k;

int dx[4] = {0, 1, 0, -1};
int dy[4] = {1, 0, -1, 0};

bool inRange(int x, int y, int n) {
    return (0 <= x < n) && (0 <= y < n);
}

int main() {
    cin >> n;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> grid[i][j];
        }
    }

    cin >> k;
    k--;
    int dir = ((k/n) + 1) % 4;

    int x, y;
    if(k / n == 0) {
        x = 0;
        y = k % n;
    }
    if(k / n == 1) {
        x = k % n;
        y = n - 1;
    }
    if(k / n == 2) {
        x = n - 1;
        y = (n - 1) - (k % n);
    }
    if(k / n == 3) {
        x = (n - 1) - (k % n);
        y = 0;
    }

    int cnt = 0;
    for(int i = 0; i < n*n; i++) {
        // 현재 위치가 격자 밖인지?
        if(!inRange(x, y, n)) {
            break;
        }

        if(grid[x][y] == '/') {
            dir = (3 - dir);
            x = x + dx[dir];
            y = y + dy[dir];
            cnt++;
            continue;
        }
        if(grid[x][y] == '\\') {
            dir = (dir % 2) ? ++dir : --dir;
            x = x + dx[dir];
            y = y + dy[dir];
            cnt++;
            continue;
        }
    }

    cout << cnt;
    

    return 0;
}