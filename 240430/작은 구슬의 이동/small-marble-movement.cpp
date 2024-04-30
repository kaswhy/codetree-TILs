#include <iostream>
using namespace std;

bool isRange(int x, int y, int n){
    if(x < 1 || x > n || y < 1 || y > n){
        return false;
    }
    return true;
}

int changeDir (char c){
    if (c == 'U') {
        return 2;
    }
    else if(c == 'D'){
        return 1;
    }
    else if (c== 'R') {
        return 0;
    }
    else if (c== 'L'){
        return 3;
    }
    return -1;
}

int dx[4] = {0, -1, 1, 0};
int dy[4] = {1, 0, 0, -1};

int main() {
    int n, t;
    cin >> n >> t;

    int r, c;
    char d;
    cin >> r >> c >> d;
    int x = r;
    int y = c;

    int dir = changeDir(d);
    do {
        int nx = x + dx[dir];
        int ny = y + dy[dir];

        if(!isRange(nx, ny, n)){
            t--;
            dir = 3 - dir;
        }
        else{
            x = nx;
            y = ny;
        }
    } while(t--);

    cout << x << " " << y;
    return 0;
}