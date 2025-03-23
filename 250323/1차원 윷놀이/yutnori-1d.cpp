#include <iostream>

using namespace std;

int n, m, k;
int nums[12];
int rolls[4];
int max_score = 0;
int now = 0;

void choice(int num) {
    if(num == n + 1){
        if(now > max_score) max_score = now;
        now = 0;
        return;
    }

    for(int i = 1; i<=k; i++){
        if(rolls[i-1] >= m-1) continue;

        rolls[i-1] += nums[num-1];
        // cout << rolls[i-1] << " " << m-1 << "\n";
        if(rolls[i-1] >= m-1) {
            now++;
        }

        choice(num+1);
        
        rolls[i-1] -= nums[num-1];
        if(rolls[i-1] >= m-1) {
            now--;
        }
    }
    if(now > max_score) max_score = now;
        now = 0;
        return;
}

int main() {
    cin >> n >> m >> k;

    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }


    choice(1);
    cout << max_score;

    return 0;
}
