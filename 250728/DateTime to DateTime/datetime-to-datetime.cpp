#include <iostream>

using namespace std;

int a, b, c;

int main() {
    cin >> a >> b >> c;

    // 이전 거를 어케 하지?
    // a = 11, b = 11, c < 11
    // a = 11, b < 11
    // a < 11
    if(a < 11) {
        cout << -1;
        return 0;
    }
    if(a == 11) {
        if(b < 11) {
            cout << -1;
            return 0;
        }
        if(b == 11) {
            if(c < 11) {
                cout << -1;
                return 0;
            }
        }
    }

    int d = 11, h = 11, m = 11;
    int cnt = 0;
    while(d != a || h != b || m != c) {
        cnt++;
        m++;

        if(m == 60) {
            h++;
            m = 0;
        }
        if(h == 24) {
            d++;
            h = 0;
        }
    }

    cout << cnt;

    return 0;
}