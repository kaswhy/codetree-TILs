#include <iostream>

using namespace std;

int N, M;
bool arr[101][101];

int dx[4] = {0, 1, 0, -1};
int dy[4] = {1, 0, -1, 0};

int main() {
    cin >> N >> M;

    for (int i = 0; i < M; i++) {
        int r, c;
        cin >> r >> c;

        arr[r][c] = true;
        int tmp = 0;
        for(int i = 0; i<4; i++) {
            int nx = r + dx[i];
            int ny = c + dy[i];
            if(nx < 1 || nx > N || ny < 1 || ny > N) continue;
            if(arr[nx][ny]) tmp++;
        }
        if(tmp == 3) cout << 1 << "\n";
        else cout << 0 << "\n";
    }


    return 0;
}