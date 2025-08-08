#include <iostream>

using namespace std;

int n, m;
int arr[100][100];

int dx[4] = {0, 1, 0, -1};
int dy[4] = {1, 0, -1, 0};

bool inRange(int x, int y) {
    return (0 <= x && x < n) && (0 <= y && y < m) && (arr[x][y] == 0);
}

int main() {
    cin >> n >> m;

    int x = 0 , y = -1, now = 0, dir = 0;
    
    while(now < n * m) {
        int nx = x + dx[dir];
        int ny = y + dy[dir];

        if(!inRange(nx, ny)) {
            dir = (dir + 1) % 4;
            continue;
        }
        arr[x][y] = now;
        now++;
        x = nx;
        y = ny;
    }
    arr[x][y] = now;

    for(int i = 0; i<n; i++) {
        for(int j = 0; j<m; j++) {
            cout << arr[i][j] << " ";
        }
        cout << "\n";
    }

    return 0;
}