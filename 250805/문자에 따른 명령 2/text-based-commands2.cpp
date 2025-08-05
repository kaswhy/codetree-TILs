#include <iostream>

using namespace std;

int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, -1, 0, 1};

int main() {
    string dirs;
    cin >> dirs;

    int x = 0, y = 0, dir = 3;

    for(int i = 0; i<dirs.size(); i++) {
        if(dirs[i] == 'L') {
            dir = (dir -1) % 4;
            continue;
        }
        if(dirs[i] == 'R') {
            dir = (dir +1) % 4;
            continue;
        }
        if(dirs[i] == 'F') {
            x += dx[dir];
            y += dy[dir];
        }
    }

    cout << x << " " << y;


    return 0;
}