#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int n, m;

int main() {
    cin >> n >> m;

    vector<int> a(1, 0);
    for (int i = 0; i < n; i++) {
        char c;
        int d;

        cin >> d >> c;

        if(c=='R'){
            for(int j = 0; j<d; j++) {
                a.push_back(++a[a.size() - 1]);
            }
            continue;
        }

        for(int j = 0; j<d; j++) {
            a.push_back(--a[a.size() - 1]);
        }
    }

    vector<int> b(1, 0);
    for (int i = 0; i < m; i++) {
        char c;
        int d;

        cin >> d >> c;

        if(c=='R'){
            for(int j = 0; j<d; j++) {
                b.push_back(++b[b.size() - 1]);
            }
            continue;
        }

        for(int j = 0; j<d; j++) {
            b.push_back(--b[b.size() - 1]);
        }
    }

    int cnt = 0, max_dist = max(a.size(), b.size());
    for(int i = 2; i < max_dist; i++) {
        // 둘 중 하나가 멈춘 경우, 작은 쪽의 마지막 인덱스랑 계속 비교해야 함
        if(a.size() > b.size() && i >= b.size()) {
            if(a[i-1] != b[b.size() -1] && a[i] == b[b.size() - 1]) cnt++;
            continue;
        }
        if(b.size() > a.size() && i >= a.size()) {
            if(b[i-1] !=  a[a.size() - 1] && b[i] == a[a.size() - 1]) cnt++;
            continue;
        }

        // 둘 다 안 멈춘 경우, 그냥 비교
        if(a[i-1] != b[i-1] && a[i] == b[i]) cnt++;
    }

    cout << cnt;

    return 0;
}