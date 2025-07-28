#include <iostream>

using namespace std;

int m1, d1, m2, d2;

string days[7] = {"Mon", "Tue", "Wed", "Thu", "Fri", "Sat", "Sun"};
int month[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

int main() {
    cin >> m1 >> d1 >> m2 >> d2;

    // 1. m1 == m2
    if(m1 == m2) {
        // m1, d1이 앞선 경우
        if(d1 > d2) {
            cout << days[(d2 - d1) % 7 + 7];
            return 0;
        }
        cout << days[(d2 - d1) % 7];
        return 0;
    }

    // 2. m1 < m2 (ex. 3 28 5 4)
    if(m1 < m2) {
        int cnt = 0;
        for(int i = m1; i <= m2; i++) {
            if(i == m1) {
                cnt += (month[m1] - d1);
                continue;
            }
            if(i == m2) {
                cnt += d2;
                break;
            }
            cnt += month[i];
        }
        cout << days[cnt % 7];
        return 0;
    }

    // 3. m1 > m2 (ex. 5 4 3 28)
    int cnt = 0;
    for(int i = m2; i <= m1; i++) {
        if(i == m2) {
            cnt -= (month[m2] - d2);
            continue;
        }
        if(i == m1) {
            cnt -= d1;
            break;
        }
        cnt -= month[i];
    }
    int mod = cnt % 7;
    if(mod == 0) {
        cout << days[mod];
        return 0;
    }
    cout << days[(mod % 7) + 7];

    return 0;
}