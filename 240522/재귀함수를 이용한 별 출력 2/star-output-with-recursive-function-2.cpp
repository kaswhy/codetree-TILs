#include <iostream>
using namespace std;

void stars(int x){
    if(x == 0){
        return;
    }

    for(int i = 0; i< x; i++){
        cout << "* ";
    }
    cout << "\n";

    stars(x-1);
}

void stars2(int j, int x){
    if(j > x){
        return;
    }

    for(int i = 0; i< j; i++){
        cout << "* ";
    }
    cout << "\n";
    
    stars2(j+1, x);
}

int main() {
    int n;
    cin >> n;

    stars(n);
    stars2(1, n);
    return 0;
}