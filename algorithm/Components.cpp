#include <bits/stdc++.h>
using namespace std;

const int N = 1e3+5;
vector<int> adj[N];
bool visited[N];

void bfs(int s, int &count) {
    queue<int> q;
    q.push(s);
    visited[s] = true;
    count++;

    while (!q.empty()) {
        int u = q.front();
        q.pop();
        for (int v : adj[u]) {
            if (visited[v]) continue;
            q.push(v);
            visited[v] = true;
            count++;
        }
    }
};

int main() {
    int n, m;
    cin>>n>>m;

    for (int i = 0; i < m; i++) {
        int A, B;
        cin>>A>>B;
        adj[A].push_back(B);
        adj[B].push_back(A);
    }
    
    vector<int> v;
    for (int i = 0; i < N; i++) {
        if (visited[i]) continue;
        else {
            int count = 0;
            bfs(i, count);
            if (count > 1) v.push_back(count);
        }
    }

    sort(v.begin(), v.end());
    for (int value : v) cout<<value<<" ";

    return 0;
}