#include <iostream>

using namespace std;

int N;


int calc(int n) {
    if(n <= 2) {
        return n;
    }
    return calc(n - 2) + n;
}

int main() {
    cin >> N;

    cout << calc(N);
    
    return 0;
}