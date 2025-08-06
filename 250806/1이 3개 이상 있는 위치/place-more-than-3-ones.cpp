#include <iostream>

using namespace std;

int n;
int grid[100][100];

int dx[4] = {0, 1, 0, -1};
int dy[4] = {1, 0, -1, 0};

bool inRange(int x, int y) {
    return (0 <= x && x < n) && (0 <= y && y < n); 
}

int main() {
    cin >> n;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> grid[i][j];
        }
    }

    int nx = 0, ny = 0, cnt = 0;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            int tmp = 0;
            
            for(int k = 0; k < 4; k++) {
                nx = i + dx[k];
                ny = j + dy[k];

                if(inRange(nx, ny) && grid[nx][ny] == 1) {
                    tmp++;
                }
            }
            if(tmp >= 3) cnt++;
        }
    }

    cout << cnt;

    return 0;
}