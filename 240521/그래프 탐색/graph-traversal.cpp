#include <iostream>
#include <vector>
using namespace std;

vector<bool> visited(1001);
vector<vector<int>> graph(1001);
int answer = 0;

void dfs(int vertex){
    for(int i = 0; i<graph[vertex].size(); i++){
        int cur_v = graph[vertex][i];
        if(!visited[cur_v]){
            answer++;
            visited[cur_v] = true;
            dfs(cur_v);
        }
    }
}

int main() {
    int n, m;
    cin >> n >> m;

    for(int i = 0; i<n; i++){
        int x, y;
        cin >> x >> y;
        graph[x].push_back(y); // 여기까지 input
    }

    visited[1] = true;
    dfs(1);

    cout << answer << "\n";

    return 0;
}