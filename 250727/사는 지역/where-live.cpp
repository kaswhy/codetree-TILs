#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

class Person {
    public: 
        string name, address, region;

        Person(string name = "", string address = "", string region = "") {
            this->name = name;
            this->address = address;
            this->region = region;
        }

};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string name, address, region;

    int n;
    cin >> n;

    vector<Person> person(n);
    for(int i = 0; i<n; i++) {
        string name, address, region;
        cin >> name >> address >> region;
        person[i] = Person(name, address, region);
    }

    Person answer = person[0];
    for(int i = 0; i<n-1; i++) {
        if(person[i].name >= person[i].name) {
            answer = person[i];
        }
        answer = person[i+1];
    }

    cout << "name " << answer.name << "\n";
    cout << "addr " << answer.address << "\n";
    cout << "city " << answer.region << "\n";

}