#include <iostream>
#include <cmath>

using namespace std;

int m1, m2, d1, d2;
string A;

int month[13] = {0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
string days[7] = {"Mon", "Tue", "Wed", "Thu", "Fri", "Sat", "Sun"};

int getDays(int m, int d) {
    int cnt = d;
    for(int i = 1; i <m; i++) {
        cnt+= month[i];
    }
    return cnt;
}

int main() {
    cin >> m1 >> d1 >> m2 >> d2;
    cin >> A;

    int target = -1;
    for(int i =0 ; i<7; i++){
        if(A==days[i]){
            target = i;
            break;
        }
    }

    int diff = getDays(m1, d1) - getDays(m2, d2);

    // 양수, 0
    if(diff >= 0) {
        int cnt = diff / 7;
        if(diff % 7 >= target) cnt++;
        cout << cnt;

        return 0;
    }
    
    // 음수
    int cnt = abs(diff) / 7;
    if(abs(diff) % 7 >= target - 1) cnt++;
    cout << cnt;

    return 0;
}