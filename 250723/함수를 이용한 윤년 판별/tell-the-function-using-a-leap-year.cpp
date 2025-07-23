#include <iostream>

using namespace std;

int y;

bool isYoonneyon(int n) {
    if(n%4 != 0) {
        return false;
    }
    if((n%100 == 0) && (n%400!=0)) {
        return false;
    }
    return true;
}

int main() {
    cin >> y;

    if(isYoonneyon(y)){
        cout << "true";
        return 0;
    }
    cout << "false";

    return 0;
}