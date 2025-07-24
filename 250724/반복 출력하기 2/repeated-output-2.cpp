#include <iostream>

using namespace std;

int N;

void printHelloWorld(int n) {
    if(n == 0) {
        return;
    }
    cout << "HelloWorld\n";
    printHelloWorld(n-1);
}

int main() {
    cin >> N;

    printHelloWorld(N);

    return 0;
}