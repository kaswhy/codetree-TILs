#include <iostream>

using namespace std;

int N, k;
int candy[100];

int main() {
    cin >> N >> k;

    for (int i = 0; i < N; i++) {
        int c, p;
        cin >> c >> p;
        candy[p] = c;
    }

    int max_cnt = 0;
    for(int c = k; c<100-k; c++) {
        int cnt = 0;
        for(int i = c-k; i<=c+k; i++) {
            cnt+=candy[i];
        }
        if(cnt > max_cnt) {
            max_cnt = cnt;
        }
    }

    cout << max_cnt;

    return 0;
}