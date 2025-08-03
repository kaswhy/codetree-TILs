#include <iostream>
#include <vector>

using namespace std;

int N, M;

int main() {
    cin >> N >> M;

    vector<int> a(1,0);
    for (int i = 0; i < N; i++) {
        int v, t;
        cin >> v >> t;

        for(int j = 0; j < t; j++) {
            a.push_back(a[a.size()- 1] + v);
        }
    }

    vector<int> b(1, 0);
    for (int i = 0; i < M; i++) {
        int v, t;
        cin >> v >> t;

        for(int j = 0; j < t; j++) {
            b.push_back(b[b.size()- 1] + v);
        }
    }

    int cnt = 0, last = (a[1] >= b[1]) ? 0 : 1;
    for(int i = 2; i < a.size(); i++) {
        // 이전 선두 != 지금 선두인 경우 cnt++
        // 이전 선두가 a
        if(last == 0) {
            if(a[i] < b[i]) {
                last = 1;
                cnt++;
            }
            continue;
        }

        // 이전 선두가 b
        if(a[i] > b[i]) {
            last = 0;
            cnt++;
        }
    }

    cout << cnt;

    return 0;
}