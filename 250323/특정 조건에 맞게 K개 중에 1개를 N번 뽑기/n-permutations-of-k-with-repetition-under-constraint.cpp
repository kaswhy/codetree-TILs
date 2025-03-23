#include <iostream>
#include <vector>

using namespace std;

int K, N;
vector<int> v;


void choice(int num) {
    // 종료 조건
    if(num == N + 1) {
        for(int i = 0; i<N; i++){
            cout << v[i] << " ";
        }
        cout << "\n";
        return;
    }

    for(int i = 1; i<=K; i++){
        if(num > 2) {
            if(v[num-3] == v[num-2] && v[num-2] == i) continue;
        }
        v.push_back(i);
        choice(num+1);
        v.pop_back();

    }

}

int main() {
    cin >> K >> N;

    choice(1);

    return 0;
}
