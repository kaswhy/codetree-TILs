#include <iostream>
#include <string>

using namespace std;

int N, T;
string str;
int board[100][100];

int dx[4] = {0, 1, 0, -1};
int dy[4] = {1, 0, -1, 0};

bool inRange(int x, int y) {
    return (0 <= x && x < N) && (0 <= y && y < N);
}

int main() {
    cin >> N >> T;
    cin >> str;

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cin >> board[i][j];
        }
    }

    int x = N / 2, y = N / 2, dir = 3;
    int cnt = board[x][y];

    for(int i = 0; i<str.size(); i++) {
        if(str[i] == 'L') {
            dir--;
            dir = (dir < 0) ? (dir % 4) + 4 : dir % 4;
            continue;
        }
        if(str[i] == 'R') {
            dir = (dir + 1) % 4;
            continue;
        }
        int nx = x + dx[dir];
        int ny = y + dy[dir];

        if(!inRange(nx, ny)) {
            continue;
        }

        cnt += board[nx][ny];
        x = nx;
        y = ny;
    }

    cout << cnt;

    return 0;
}