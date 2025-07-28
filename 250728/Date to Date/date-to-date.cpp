#include <iostream>

using namespace std;

int m1, d1, m2, d2;

int days[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

int main() {
    cin >> m1 >> d1 >> m2 >> d2;

    int cnt = 0;
    for(int i = m1; i <= m2; i++){
        if(i == m1) {
            cnt += (days[i] - d1 + 1);
            continue;
        }
        if(i == m2) {
            cnt += d2;
            break;
        }
        cnt += days[i];
    }

    cout << cnt;

    return 0;
}