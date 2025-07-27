#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int n;

class Student {
    public:
        string name;
        int score1, score2, score3;

        Student(string name, int score1, int score2, int score3) {
            this->name = name;
            this->score1 = score1;
            this->score2 = score2;
            this->score3 = score3;
        }

        Student() {}
};

bool cmp(Student a, Student b) {
    return a.score1 + a.score2 + a.score3 < b.score1 + b.score2 + b.score3;
}

int main() {
    cin >> n;

    vector<Student> students;
    for (int i = 0; i < n; i++) {
        string name;
        int score1, score2, score3;

        cin >> name >> score1 >> score2 >> score3;
        students.push_back(Student(name, score1, score2, score3));
    }
    
    sort(students.begin(), students.end(), cmp);

    for(Student s : students){
        cout << s.name << " " << s.score1 << " " << s.score2 << " " << s.score3 << "\n";
    }

    

    return 0;
}