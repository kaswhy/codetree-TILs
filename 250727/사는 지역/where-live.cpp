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


    int last_idx = 0;
    for(int i = 0; i<n; i++) {
        if(person[i].name > person[last_idx].name) {
            last_idx = i;
        }
    }

    cout << "name " << person[last_idx].name << "\n";
    cout << "addr " << person[last_idx].address << "\n";
    cout << "city " << person[last_idx].region << "\n";

}