#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int N;

class Student{
    public:
        int height, weight, idx;

        Student(int height, int weight, int idx) {
            this->height = height;
            this->weight = weight;
            this->idx = idx;
        }
        Student() {}
};

bool cmp(Student a, Student b) {
    if(a.height == b.height) {
        if(a.weight == b.weight) {
            return a.idx < b.idx;
        }
        return a.weight > b.weight;
    }
    return a.height > b.height;
}

int main() {
    cin >> N;

    vector<Student> students;
    for (int i = 0; i < N; i++) {
        int height, weight;
        cin >> height >> weight;
        students.push_back(Student(height, weight, i+1));
    }

    sort(students.begin(), students.end(), cmp);
    for(Student s : students) {
        cout << s.height << " " << s.weight << " " << s.idx << '\n';
    }

    

    return 0;
}
