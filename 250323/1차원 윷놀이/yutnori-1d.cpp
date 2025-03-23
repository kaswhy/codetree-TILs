#include <iostream>

using namespace std;

int n, m, k;
int nums[12];
int rolls[4];
int max_score = 0;
int now = 0;

void choice(int num) {
    if(num == n){
        if(now > max_score) max_score = now;
        now = 0;
        return;
    }

    for(int i = 0; i<k; i++){
        if(rolls[i] >= m-1) continue;
        rolls[i] += nums[num];
        if(rolls[i] >= m-1) {
            now++;
        }
        choice(num+1);
        rolls[i] -= nums[num];
        if(rolls[i] >= m-1) {
            now--;
        }
    }
}

int main() {
    cin >> n >> m >> k;

    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }


    choice(0);
    cout << max_score;

    return 0;
}
