#include <iostream>

using namespace std;

int N, K;
char c[100001];

int main() {
    cin >> N >> K;

    int n;
    for (int i = 0; i < N; i++) {
        cin >> n >> c[n];
    }

    int max_count = 0;
    for(int i = 1; i<=10000-K; i++) {
        int tmp = 0;
        for(int j = 0; j<=K; j++) {
            if(c[i + j] == 'G') tmp += 1;
            if(c[i + j] == 'H') tmp += 2; 
        }
        if(tmp > max_count) max_count = tmp;
    }

    cout << max_count;

    return 0;
}