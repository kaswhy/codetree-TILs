#include <iostream>

using namespace std;

int n;
int arr[100];

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int ans = 0;

    for(int i = 0; i<n; i++) {
        for(int j = i; j<n; j++) {
            int sum = 0, cnt = 0;
            for(int k = i; k<=j; k++) {
                sum += arr[k];
                cnt++;
            }
            double avg = (double) sum / cnt;
            for(int k = i; k<=j; k++) {
                if(arr[k]==avg) {
                    ans++;
                    break;
                }
            }
        }


    }
    cout << ans;

    return 0;
}