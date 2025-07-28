#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int n;

/*
    키 기준 오름차순 정렬
    - 키가 같은 경우, 몸무게가 더 큰 사람이 먼저 나오도록
*/

class Person {
    public:
        string name;
        int height, weight;

        Person(string name, int height, int weight) {
            this->name = name;
            this->height = height;
            this->weight = weight;
        }

        Person() {}
};

bool cmp(Person a, Person b) {
    if(a.height != b.height) {
        return a.height < b.height;
    }
    return a.weight > b.weight;
}

int main() {
    cin >> n;

    vector<Person> people;
    for (int i = 0; i < n; i++) {
        string name;
        int height, weight;

        cin >> name >> height >> weight;

        people.push_back(Person(name, height, weight));
    }

    sort(people.begin(), people.end(), cmp);
    for(Person person : people) {
        cout << person.name << " " << person.height << " " << person.weight << "\n";
    }

    return 0;
}