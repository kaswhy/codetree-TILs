#include <iostream>
#include <string>

using namespace std;

string A;

bool isPalindrome(string s) {
    string tmp = "";
    for(int i = s.size() - 1; i >= 0; i--) {
        tmp += s[i];
    }
    return tmp == s;
}

int main() {
    cin >> A;

    if(isPalindrome(A)){
        cout << "Yes";
        return 0;
    }
    cout << "No";

    return 0;
}