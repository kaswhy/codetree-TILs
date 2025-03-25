#include <iostream>

using namespace std;

int N;
int grid[20][20];

int main() {
    cin >> N;

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cin >> grid[i][j];
        }
    }

    int max_cnt = 0;

    for(int i = 0; i<=N-3; i++){
        for(int j = 0; j<=N-3; j++){
            int now = 0;
            for(int k = 0; k<3; k++) {
                for(int l = 0; l < 3; l++) {
                    if(grid[i + k][j + l]) now++;
                }
            }
            if(now > max_cnt) max_cnt = now;
        }
    }

    cout << max_cnt;

    return 0;
}
