#include <iostream>
#include <algorithm>

using namespace std;

class Person {
    public:
        string name;
        int height;
        double weight;

        Person(string name, int height, double weight) {
            this->name = name;
            this->height = height;
            this->weight = weight;
        }

        Person() {}
};

bool cmpName(Person a, Person b) {
    return a.name < b.name;
}

bool cmpHeight(Person a, Person b) {
    return a.height > b.height;
}

int main() {
    Person people[5];
    for (int i = 0; i < 5; i++) {
        string name;
        int height;
        double weight;

        cin >> name >> height >> weight;

        people[i] = Person(name, height, weight);
    }

    sort(people, people + 5, cmpName);
    cout << "name\n";
    for(Person person :  people) {
        cout << person.name << " " << person.height << " " << person.weight << "\n";
    }

    sort(people, people + 5, cmpHeight);
    cout << "\nheight\n";
    for(Person person : people) {
        cout << person.name << " " << person.height << " " << person.weight << "\n";
    }

    

    return 0;
}