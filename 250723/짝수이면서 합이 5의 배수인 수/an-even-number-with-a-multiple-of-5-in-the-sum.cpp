#include <iostream>

using namespace std;

int n;

bool isMagicNumber(int n) {
    return (n % 2 == 0) && ((n/10 + n%10) % 5 == 0);
}

int main() {
    cin >> n;

    if(isMagicNumber(n)) {
        cout << "Yes";
        
        return 0;
    }
    cout << "No";

    return 0;
}