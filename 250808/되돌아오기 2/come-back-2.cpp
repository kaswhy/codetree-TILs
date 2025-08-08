#include <iostream>
#include <string>

using namespace std;

string commands;

int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, -1, 0, 1};

int main() {
    cin >> commands;

    int x = 0, y = 0, dir = 3, cnt = 0;
    for(int i = 0; i<commands.size(); i++) {
        if(commands[i] == 'L') {
            dir -= 1;
            if(dir < 0) {
                dir = (dir % 4) + 4;
                cnt++;
                continue;
            }
            dir = dir % 4;
            cnt++;
            continue;
        }
        if(commands[i] == 'R') {
            dir = (dir + 1) % 4;
            cnt++;
            continue;
        }
        x += dx[dir];
        y += dy[dir];
        cnt++;
        if(x == 0 && y == 0) break;
    }

    if(x == 0 && y == 0) {
        cout << cnt;
        return 0;
    }
    cout << -1;

    return 0;
}