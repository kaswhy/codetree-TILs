#include <iostream>
#include <vector>

using namespace std;

int n, m;

int main() {
    cin >> n >> m;

    vector<int> a(1, 0);
    int idx_a = 0;
    for (int i = 0; i < n; i++) {
        char d;
        int t;

        cin >> d >> t;

        for(int j = 0; j < t; j++) {
            if(d == 'L') {
                a.push_back(--idx_a);
                continue;
            }
            a.push_back(++idx_a);
        }
    }

    vector<int> b(1, 0);
    int idx_b = 0;
    for (int i = 0; i < m; i++) {
        char d;
        int t;

        cin >> d >> t;

        for(int j = 0; j < t; j++) {
            if(d == 'L') {
                b.push_back(--idx_b);
                continue;
            }
            b.push_back(++idx_b);
        }
    }

    int first = -1;
    for(int i = 1; i<a.size(); i++) {
        if(a[i] == b[i]) {
            first = i;
            break;
        }
    }

    cout << first;


    return 0;
}