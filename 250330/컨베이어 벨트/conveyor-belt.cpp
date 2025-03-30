#include <iostream>

using namespace std;

int n, t;
int u[200];
int d[200];

int main() {
    cin >> n >> t;

    for (int i = 0; i < n; i++) cin >> u[i];

    for (int i = 0; i < n; i++) cin >> d[i];

    // 한 번 밀면 u[n-1] -> d[0], d[n-1] -> u[0]
    for(int i = 0; i<t; i++){
        int tmp1 = u[n-1];
        int tmp2 = d[n-1];
        for(int j = n-1; j>=1; j--){
            u[j] = u[j-1];
            d[j] = d[j-1];
        }
        d[0] = tmp1;
        u[0] = tmp2;
    }

    for(int i = 0; i<n; i++){
        cout << u[i] << " ";
    }
    cout << "\n";

    for(int i = 0; i<n; i++){
        cout << d[i] << " ";
    }
    

    return 0;
}
