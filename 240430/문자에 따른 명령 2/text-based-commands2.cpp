#include <iostream>
using namespace std;

int dir_num = 3;

int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, -1, 0, 1};

int main() {
    int x = 0, y = 0;
    string s;

    cin >> s;

    for(int i = 0; i<s.size(); i++){
        if(s[i] == 'L'){
            dir_num = (dir_num - 1 + 4) % 4;
        }
        else if(s[i] == 'R'){
            dir_num = (dir_num + 1) % 4;
        }
        else if (s[i] == 'F'){
            x += dx[dir_num];
            y += dy[dir_num];
        }
    }

    cout << x << " " << y;

    return 0;
}