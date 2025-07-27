#include <iostream>

using namespace std;

int N;

int sumNums(int n) {
    if(n == 1) {
        return 1;
    }
    return sumNums(n-1) + n;
}

int main() {
    cin >> N;

    cout << sumNums(N);

    return 0;
}