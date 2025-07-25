#include <iostream>

using namespace std;

int a, b, c;

int calc(int n) {
    if(n < 10) {
        return n;
    }
    return calc(n / 10) + n % 10;
}

int main() {
    cin >> a >> b >> c;

    cout << calc(a * b * c);

    return 0;
}