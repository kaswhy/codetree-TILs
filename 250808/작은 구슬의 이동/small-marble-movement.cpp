#include <iostream>

using namespace std;

int n, t;
int r, c;
char d;

int dx[4] = {0, 1, 0, -1};
int dy[4] = {1, 0, -1, 0};

int main() {
    cin >> n >> t;
    cin >> r >> c >> d;

    int dir = -1;
    if(d == 'R') {
        dir = 0;
    }
    if(d == 'D') {
        dir = 1;
    }
    if(d == 'L') {
        dir = 2;
    }
    if(d == 'U') {
        dir = 3;
    }

    int x = r, y = c;
    for(int i = 0; i<t; i++) {
        // 방향 바꿔야 하는지 확인 (현재 방향으로 계속 진행할 수 있는지?)
        int nx = x + dx[dir];
        int ny = y + dy[dir];
        if(dir == 0) {
            if(ny > n) {
                dir = (dir + 2) % 4;
                continue;
            }
        }
        if(dir == 1) {
            if(nx > n) {
                dir = (dir + 2) % 4;
                continue;
            }
        }
        if(dir == 2) {
            if(ny < 1) {
                dir = (dir + 2) % 4;
                continue;
            }
        }
        if(dir == 3) {
            if(nx < 1) {
                dir = (dir + 2) % 4;
            }
        }

        // 방향 안 바꿔도 되면 전진
        x = nx;
        y = ny;
    }

    cout << x << " " << y;

    return 0;
}