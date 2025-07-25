#include <iostream>
#include <cmath>

using namespace std;

int N;

int calc(int n) {
    if(n <= 2) {
        return n;
    }
    return calc(floor(n/3)) + calc(n-1);
}

int main() {
    cin >> N;

    cout << calc(N);

    return 0;
}