#include <iostream>
#include <queue>
#include <vector>
#include <cstring>
using namespace std;

const int MAXN = 100;
vector<int> graph[MAXN]; 
bool visited[MAXN]; 
int dist[MAXN]; 

void bfs(int start) {
    queue<int> q;
    q.push(start);
    visited[start] = true;
    dist[start] = 0;

    while (!q.empty()) {
        int v = q.front();
        q.pop();

        for (int i = 0; i < graph[v].size(); i++) {
            int u = graph[v][i];
            if (!visited[u]) {
                visited[u] = true;
                dist[u] = dist[v] + 1;
                q.push(u);
            }
        }
    }
}

void feature(int value) {

}

int main() {
    int n, m;
    cin >> n >> m;

    for (int i = 0; i < m; i++) {
        int a, b;
        cin >> a >> b;
        graph[a].push_back(b);
        graph[b].push_back(a);
    }

    int start, end;
    cin >> start >> end;

    memset(visited, false, sizeof(visited));
    memset(dist, -1, sizeof(dist));

    bfs(start);

    return 0;
}
