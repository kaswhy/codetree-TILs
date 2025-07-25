#include <iostream>

using namespace std;

int N;

int calc(int n) {
    if(n == 1) {
        return 2;
    }
    if(n == 2) {
        return 4;
    }
    return (calc(n - 2) * calc(n - 1)) % 100;
}

int main() {
    cin >> N;

    cout << calc(N);

    return 0;
}