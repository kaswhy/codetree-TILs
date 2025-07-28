#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int N;

class Person{
    public:
        int h, w, idx;

        Person(int h, int w, int idx) {
            this->h = h;
            this->w = w;
            this->idx = idx;
        }

        Person() {}
};

bool cmp(Person a, Person b) {
    if(a.h != b. h) {
        return a.h < b.h;
    }
    return a.w > b.w;
}

int main() {
    cin >> N;

    vector<Person> people;
    for (int i = 0; i < N; i++) {
       int h, w;
       cin >> h >> w;
       people.push_back(Person(h, w, i+1));
    }

    sort(people.begin(), people.end(), cmp);
    for(Person p : people) {
        cout  << p.h << " " << p.w << " " << p.idx << "\n";
    }

    return 0;
}