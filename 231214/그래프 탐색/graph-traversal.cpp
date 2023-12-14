#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    vector<vector<int>> v(n+1);
    vector<bool> check(n+1);

    for(int i = 0; i<m;i++){
        int x , y;
        cin >> x >> y;
        v[x].push_back(y);
        v[y].push_back(x);
    }

    queue<int> que;
    que.push(1);

    int count = 0;
    while(!que.empty()){
        int dst = que.front();
        que.pop();

        if(check[dst] == true){
            continue;
        }

        check[dst] = true;
        count++;

        for(int i = 0; i< v[dst].size(); i++){
            if(check[v[dst][i]] == false){
                que.push(v[dst][i]);
            }
        }
    }

    cout << count - 1 << "\n";

    return 0;
}