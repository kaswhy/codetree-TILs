#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int N, K, P, T;

class Handshake{
    public:
        int t, x, y;
        
        Handshake(int t, int x, int y) {
            this->t = t;
            this->x = x;
            this->y = y;
        }

        Handshake() {}
};

bool cmp(Handshake a, Handshake b) {
    return a.t < b.t;
}

int main() {
    cin >> N >> K >> P >> T;

    vector<Handshake> v;
    for (int i = 0; i < T; i++) {
        int t, x, y;
        cin >> t >> x >> y;
        v.push_back(Handshake(t, x, y));
    }

    sort(v.begin(), v.end(), cmp);

    vector<bool> dev_is(N+1, false);
    vector<int> dev_cnt(N+1, 0);
    dev_is[P] = true;
    for(int i = 0; i<v.size(); i++) {
        if(dev_is[v[i].x] && dev_cnt[v[i].x] < K) {
            if(!dev_is[v[i].y]) {
                dev_is[v[i].y] = true;
                dev_cnt[v[i].x]++;
                continue;
            }
            dev_cnt[v[i].x]++;
            dev_cnt[v[i].y]++;
            continue;
        }
        if(dev_is[v[i].y] && dev_cnt[v[i].y] < K) {
            if(!dev_is[v[i].x]) {
                dev_is[v[i].x] = true;
                dev_cnt[v[i].y]++;
                continue;
            }
            dev_cnt[v[i].x]++;
            dev_cnt[v[i].y]++;
        }
    }

    for(int i = 1; i<=N; i++){
        cout << (int) dev_is[i];
    }
    
    return 0;
}