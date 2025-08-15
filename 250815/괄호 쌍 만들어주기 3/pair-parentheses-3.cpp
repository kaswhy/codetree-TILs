#include <iostream>
#include <string>

using namespace std;

string A;

int main() {
    cin >> A;

    int cnt = 0;
    for(int i = 0; i < A.size() - 1; i++) {
        if(A[i] == ')') continue;
        for(int j = i + 1; j < A.size(); j++) {
            if(A[j] == ')') cnt++;
        }
    }

    cout << cnt;

    return 0;
}