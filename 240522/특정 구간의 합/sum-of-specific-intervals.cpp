#include <iostream>
#include <vector>
using namespace std;

vector<int> A;

int main() {
    int n, m;
    cin >> n >> m;

    for(int i = 0; i<n; i++){
        int x;
        cin >> x;
        A.push_back(x);
    }

    for(int i = 0; i<m; i++){
        int a1, a2;
        cin >> a1 >> a2;

        int sum = 0;
        for(int j = a1-1; j <= a2-1; j++){
            sum += A[j];
        }
        cout << sum << "\n";
    }
    return 0;
}