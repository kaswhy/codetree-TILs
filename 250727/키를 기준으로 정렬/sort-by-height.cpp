#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int n;
string name[10];
int height[10];
int weight[10];

class Person {
    public:
        string name;
        int height, weight;

        Person(string name = "", int height = 0, int weight = 0) {
            this->name = name;
            this->height = height;
            this->weight = weight;
        }
};

bool comp(Person a, Person b) {
    if(a.height < b.height) {
        return true;
    }
    return false;
}

int main() {
    cin >> n;

    vector<Person> person(n);
    for (int i = 0; i < n; i++) {
        cin >> name[i];
        cin >> height[i];
        cin >> weight[i];
        person[i] = Person(name[i], height[i], weight[i]);
    }

    sort(person.begin(), person.end(), comp);
    for(int i = 0; i<n; i++) {
        cout << person[i].name << " " << person[i].height << " " << person[i].weight << "\n";
    }    

    return 0;
}