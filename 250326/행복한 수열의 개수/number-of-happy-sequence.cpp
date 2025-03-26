#include <iostream>

using namespace std;

int n, m;
int grid[100][100];

int main() {
    cin >> n >> m;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> grid[i][j];
        }
    }

    int count = 0; // 행복한 수열 개수

    // 행으로 이루어진 수열에서 개수 세기
    for(int i = 0; i< n; i++) {
        int now = 1; // 연속으로 동일한 원소가 나온 개수
        int now_max = 1;
        for(int j = 1; j<n; j++) {
            if(grid[i][j] == grid[i][j-1]) {
                now++;
                if(now > now_max) now_max = now;
                continue;
            }
            now = 1;
        }
        if(now_max >= m) count++;
    }

    // 열로 이루어진 수열에서 개수 세기
    for(int i = 0; i< n; i++) {
        int now = 1; // 연속으로 동일한 원소가 나온 개수
        int now_max = 1;
        for(int j = 1; j<n; j++) {
            if(grid[j][i] == grid[j-1][i]) {
                now++;
                if(now > now_max) now_max = now;
                continue;
            }
            now = 1;
        }
        if(now_max >= m) count++;
    }

    cout << count;

    return 0;
}
