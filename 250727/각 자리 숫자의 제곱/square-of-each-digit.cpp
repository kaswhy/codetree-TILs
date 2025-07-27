#include <iostream>
#include <cmath>

using namespace std;

int N;

int calc(int n) {
    if(n < 10) {
        return pow(n, 2);
    }
    return calc(n / 10) + pow((n % 10), 2);
}

int main() {
    cin >> N;

    cout << calc(N);

    return 0;
}