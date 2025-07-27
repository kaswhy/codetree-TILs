#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int n;

class Student{
    public:
        string name;
        int kor, eng, math;

        Student(string name, int kor, int eng, int math) {
            this->name = name;
            this->kor = kor;
            this->eng = eng;
            this->math = math;
        }

        Student() {}
};

bool cmp(Student a, Student b) {
    if(a.kor == b.kor) {
        if(a.eng == b.eng) {
            return a.math > b.math;
        }
        return a.eng > b.eng;
    }
    return a.kor > b.kor;
}

int main() {
    cin >> n;

    vector<Student> students;
    for (int i = 0; i < n; i++) {
        string name;
        int kor, eng, math;

        cin >> name >> kor >> eng >> math;

        students.push_back(Student(name, kor, eng, math));
    }

   sort(students.begin(), students.end(), cmp);
   for(Student student : students) {
        cout << student.name << " " << student.kor << " " << student.eng << " " << student.math << "\n";
   }

    return 0;
}