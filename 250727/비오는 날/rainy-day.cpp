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

    for(int i = 0; i < n; i++) {
        if(weather[i] == "Rain") {
            cout << date[i] << " " << day[i] << " " << weather[i];
            return 0;
        }
    }

    return 0;
}