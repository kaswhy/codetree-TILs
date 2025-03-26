#include <iostream>

using namespace std;

int n, m;
int grid[200][200];

int main() {
    cin >> n >> m;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> grid[i][j];
        }
    }

    int max_sum = 0;

    // 1번 블록
    for(int i = 0; i<n-1; i++){
        for(int j = 0; j<n-1; j++) {
            int now = 0;
            now += (grid[i][j] + grid[i+1][j] + grid[i+1][j+1]);
            if(now > max_sum) max_sum = now;
        }
    }

    // 2번 블록
    for(int i = 0; i<n-1; i++){
        for(int j = 0; j<n-1; j++) {
            int now = 0;
            now += (grid[i][j] + grid[i+1][j] + grid[i][j+1]);
            if(now > max_sum) max_sum = now;
        }
    }

    // 3번 블록
    for(int i = 0; i<n-1; i++){
        for(int j = 1; j<n; j++) {
            int now = 0;
            now += (grid[i][j] + grid[i+1][j] + grid[i+1][j-1]);
            if(now > max_sum) max_sum = now;
        }
    }

    // 4번 블록
    for(int i = 0; i<n-1; i++){
        for(int j = 0; j<n-1; j++) {
            int now = 0;
            now += (grid[i][j] + grid[i][j+1] + grid[i+1][j+1]);
            if(now > max_sum) max_sum = now;
        }
    }

    // 5번 블록
    for(int i = 0; i<n; i++){
        for(int j = 0; j<n-2; j++) {
            int now = 0;
            now += (grid[i][j] + grid[i][j+1] + grid[i][j+2]);
            if(now > max_sum) max_sum = now;
        }
    }

    // 6번 블록
    for(int i = 0; i<n-2; i++) {
        for(int j = 0; j<n; j++) {
            int now = 0;
            now += (grid[i][j] + grid[i+1][j] + grid[i+2][j]);
            if(now > max_sum) max_sum = now;
        }
    }

    cout << max_sum;

    return 0;
}
