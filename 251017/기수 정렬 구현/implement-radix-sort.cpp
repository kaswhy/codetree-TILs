#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int n;
int arr[100000];

int main() {
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    for(int i = 0; i<= 5; i++) { // 자릿수
    /* 
     123456
     6 => (123456 / 1) % 10
     5 => (123456 / 10) % 10
     4 => (123456 / 100) % 10
    */
        vector<vector<int>> v(10);
        for(int j = 0; j<n; j++) {
            int comp = ((int)(arr[j] / pow(10, i))) % 10;
            v[comp].push_back(arr[j]);
        }

        int tmp = 0;
        for(int j = 0; j<10; j++) {
            for(int k = 0; k<v[j].size(); k++) {
                arr[tmp] = v[j][k];
                tmp++;
            }
        }
    }

    for(int i = 0; i<n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
