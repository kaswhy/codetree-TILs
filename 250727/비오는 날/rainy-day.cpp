#include <iostream>
#include <string>

using namespace std;

int n;
string date[100];
string day[100];
string weather[100];

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> date[i] >> day[i] >> weather[i];
    }

    int last_date = -1;
    for(int i = 0; i < n; i++) {
        if(weather[i] == "Rain") {
            if(last_date == -1){
                last_date = i;
                continue;
            }
            if(date[i] < date[last_date]) {
                last_date = i;
            }
        }
    }

    cout << date[last_date] << " " << day[last_date] << " " << weather[last_date];

    return 0;
}