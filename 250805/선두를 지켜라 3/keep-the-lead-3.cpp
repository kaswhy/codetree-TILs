#include <iostream>
#include <vector>

using namespace std;

int N, M;

int main() {
    cin >> N >> M;

    vector<int> a(1, 0);
    for (int i = 0; i < N; i++) {
        int v, t;
        cin >> v >> t;

        for(int j = 0; j<t; j++) {
            a.push_back(a[a.size()-1] + v);
        }
    }

    vector<int> b(1, 0);
    for (int i = 0; i < M; i++) {
        int v, t;
        cin >> v >> t;

        for(int j = 0; j<t; j++) {
            b.push_back(b[b.size()-1]+ v);
        }
    }

    int cnt = 0;
    for(int i = 1; i<a.size(); i++) {
        // 이전 A
        if(a[i-1] > b[i-1]) {
            if(a[i] == b[i]) cnt++;
            if(a[i] < b[i]) cnt++;
            continue;
        }

        // 이전 B
        if(b[i-1] > a[i-1]) {
            if(b[i] == a[i]) cnt++;
            if(b[i] < a[i]) cnt++;
            continue;
        }

        // 이전 A, B
        if(a[i] != b[i]) cnt++;
    }

    cout << cnt;

    return 0;
}