#include <iostream>
#include <algorithm>

using namespace std;

int n;
int arr[10];

int gcd(int x, int y) {
    int a = max(x, y);
    int b = min(x, y);
    if(a % b == 0) {
        return b;
    }
    return gcd(b, a % b);
}

int lcm(int a, int b) {
    return (a * b) / gcd(a, b);
}

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int ans = arr[0];
    for(int i = 0; i<n; i++) {
        ans = lcm(arr[i], ans);
    }

    cout << ans;

    return 0;
}