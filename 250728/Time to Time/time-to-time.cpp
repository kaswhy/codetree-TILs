#include <iostream>

using namespace std;

int a, b, c, d;

int main() {
    cin >> a >> b >> c >> d;

    int cnt = 0;
    while(a != c || b != d) {
        cnt++;
        b++;

        if(b == 60) {
            a++;
            b = 0;
        }
    }

    cout << cnt;

    return 0;
}