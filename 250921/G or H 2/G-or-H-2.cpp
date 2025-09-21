#include <iostream>

using namespace std;

int N;
int pos[101];
char alpha[101];

int main() {
    cin >> N;

    for (int i = 0; i < N; i++) {
        cin >> pos[i] >> alpha[pos[i]];
    }

    int max_size = 0;
    for(int i = 0; i < 101; i++) { // 시작점
        if(alpha[i] != 'H' && alpha[i] !='G') continue;
        for(int j = i; j<101; j++) { // 끝점
            if(alpha[j] != 'H' && alpha[j] != 'G') continue;
            int g = 0, h = 0;
            for (int k = i; k<=j; k++) {
                if(alpha[k]=='G') g++;
                if(alpha[k]=='H')h++;
            }
            if(h == 0 && g == 0) continue;
            if(h+g == 1) continue;
            if((h== 0 || g ==0) || h==g) {
                if(j - i >max_size) max_size = j-i;
            }
        }
    }
    cout << max_size;

    return 0;
}