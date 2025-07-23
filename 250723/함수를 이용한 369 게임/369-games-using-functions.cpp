#include <iostream>

using namespace std;

int a, b;

bool is369(int n) {
    for(int i = n; i>0; i/=10) {
        int now = i % 10;
        if(now == 3 || now == 6 || now == 9) {
            return true;
        }
    }
    return false;
}

bool isMagicNumber(int n) {
    return (n % 3 == 0) || is369(n);
}

int main() {
    cin >> a >> b;

    int cnt = 0;
    for(int i = a; i<=b; i++) {
        if(isMagicNumber(i)) {
            cnt++;
        }
    }
    cout << cnt;

    return 0;
}