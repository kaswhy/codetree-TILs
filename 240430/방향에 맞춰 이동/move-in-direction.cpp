#include <iostream>
using namespace std;

int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, -1, 0, 1};

int main() {
    int n, x = 0, y = 0;
    cin >> n;

    for(int i = 0; i<n; i++){
        string s;
        int dis;

        cin >> s >> dis;

        for(int j = 0; j<dis; j++){
            if (s == "E") {
                x += dx[0];
                y += dy[0];
            }
            else if (s == "S"){
                x += dx[1];
                y += dy[1];
            }
            else if (s == "W"){
                x += dx[2];
                y += dy[2];
            }
            else if (s == "N") {
                x += dx[3];
                y += dy[3];
            }
        }
    }

    cout << x << " " << y;
    return 0;
}