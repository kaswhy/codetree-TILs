#include <iostream>
#include <vector>

using namespace std;

int N, M, K;

int main() {
    cin >> N >> M >> K;

    vector<int> students(101, 0);
    int first = -1;
    for (int i = 0; i < M; i++) {
        int idx;
        cin >> idx;

        students[idx]++;

        if(students[idx] >= K) {
            first = idx;
            break;
        }
    }

    cout << first;

    return 0;
}