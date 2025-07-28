#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int N;

class Seq{
    public:
        int num, idx;

        Seq(int num, int idx) {
            this->num = num;
            this->idx = idx;
        }

        Seq() {}
};

bool cmp(Seq a, Seq b){
    if(a.num != b.num) {
        return a.num < b.num;
    }
    return a.idx < b.idx;
}

int main() {
    cin >> N;

    vector<Seq> sequence;
    vector<Seq> after;
    for (int i = 0; i < N; i++) {
        int num;
        cin >> num;
        sequence.push_back(Seq(num, i+1));
        after.push_back(Seq(num, i+1));
    }

    sort(after.begin(), after.end(), cmp);
    for(Seq seq : sequence) {
        for(int i = 0; i < N; i++) {
            if(after[i].idx == seq.idx) {
                cout << i + 1 << " ";
            }
        }
    }

    return 0;
}
