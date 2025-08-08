#include <iostream>

using namespace std;

int N;

int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, -1, 0, 1};

int getDir(char c) {
    if(c == 'E') {
        return 0;
    }
    if(c == 'N') {
        return 1;
    }
    if(c == 'W') {
        return 2;
    }
    return 3;
}

int main() {
    cin >> N;

    int x = 0, y = 0, cnt = 0, dir = -1;
    for (int i = 0; i < N; i++) {
        char c;
        int dist;

        cin >> c >> dist;
        dir = getDir(c);

        for(int j = 0; j<dist; j++) {
            x += dx[dir];
            y += dy[dir];
            cnt++;

            if(x == 0 && y == 0) break;
        }
        if(x == 0 && y == 0) break;
    }

    if(x == 0 && y == 0) {
        cout << cnt;
        return 0;
    }

    cout << -1;   

    return 0;
}