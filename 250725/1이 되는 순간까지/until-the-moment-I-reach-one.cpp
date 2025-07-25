#include <iostream>

using namespace std;

int N;

int calc(int n) {
    // 1이면 계산 안 해
    if(n == 1) {
        return 0;
    }

    // n이 짝수면 2로 나눠
    if(n % 2 == 0) {
        return calc(n / 2) + 1;
    }

    return calc(n / 3) + 1;

}

int main() {
    cin >> N;

    cout << calc(N);

    return 0;
}