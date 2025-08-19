#include <iostream>
#include <cmath>

using namespace std;

string a;

int main() {
    cin >> a;

    int ans = 0;
    bool is_first = true;
    for(int i = 0; i<a.size(); i++) {
        if(a[i] == '1') {
            ans += pow(2, a.size() - i - 1);
            continue;
        }
        if(is_first) {
            is_first = false;
            ans += pow(2, a.size() - i - 1);
        }
    }

    cout << ans;

    return 0;
}