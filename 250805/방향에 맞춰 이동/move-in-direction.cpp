#include <iostream>

using namespace std;

int n;
int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, -1, 0, 1};

int main() {
    cin >> n;

    int x = 0, y = 0;
    for (int i = 0; i < n; i++) {
        char c;
        int dist;

        cin >> c >> dist;

        if(c == 'E') {
            for(int j = 0; j<dist; j++) {
                x += dx[0];
                y += dy[0];
            }
            continue;
        }
        if(c == 'S') {
            for(int j = 0; j<dist; j++) {
                x += dx[1];
                y += dy[1];
            }
            continue;
        }
        if(c == 'W') {
            for(int j = 0; j<dist; j++) {
                x += dx[2];
                y += dy[2];
            }
            continue;
        }
        if(c == 'N') {
            for(int j = 0; j<dist; j++) {
                x += dx[3];
                y += dy[3];
            }
        }
    }

    cout << x << " " << y;

    return 0;
}