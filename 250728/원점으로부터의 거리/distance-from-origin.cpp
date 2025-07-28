#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>

using namespace std;

int N;

class Point{
    public:
        int x, y, idx;

        Point(int x, int y, int idx) {
            this->x = x;
            this->y = y;
            this->idx = idx;
        }

        Point() {}
};

bool cmp (Point a, Point b) {
    if(abs(a.x) + abs(a.y) != abs(b.x) + abs(b.y)) {
        return abs(a.x) + abs(a.y) < abs(b.x) + abs(b.y);
    }
    return a.idx < b.idx;
}

int main() {
    cin >> N;

    vector<Point> points;
    for (int i = 0; i < N; i++) {
        int x, y;
        
        cin >> x >> y;

        points.push_back(Point(x, y, i+1));
    }

    sort(points.begin(), points.end(), cmp);
    for(Point point : points) {
        cout << point.idx << "\n";
    }

    return 0;
}
