#include <iostream>

using namespace std;

int N;

void printStars(int n) {
    if(n > N) {
        return;
    }
    for(int i = 0; i<n; i++){
        cout << "*";
    }
    cout << "\n";
    printStars(n + 1);
}

int main() {
    cin >> N;

    printStars(1);

    return 0;
}