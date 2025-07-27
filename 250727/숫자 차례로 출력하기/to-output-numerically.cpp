#include <iostream>

using namespace std;

int N;

void printFirst(int now) {
    if(now == 0) {
        return;
    }
    cout << N- now + 1 << " ";
    return printFirst(now - 1);
}

void printSecond(int now) {
    if(now == 0) {
        return;
    }
    cout << now << " ";
    return printSecond(now - 1);
}

int main() {
    cin >> N;

    printFirst(N);
    cout << "\n";
    printSecond(N);

    return 0;
}