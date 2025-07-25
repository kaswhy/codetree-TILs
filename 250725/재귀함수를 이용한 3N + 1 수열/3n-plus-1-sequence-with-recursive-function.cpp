#include <iostream>

using namespace std;

int n;

int cnt(int n) {
    if(n == 1) {
        return 0;
    }
    if(n % 2 == 0) {
        return cnt(n / 2) + 1;
    }
    return cnt(n * 3 + 1) + 1;
}

int main() {
    cin >> n;

    cout << cnt(n);

    return 0;
}