#include<bits/stdc++.h>
using namespace std;

const int N = 1e3+5;
vector<int> adj[N];
bool visited[N];

bool dfs (int u, int p = -1) {
    visited[u] = true;
    bool is_detected = false;
    for (int v : adj[u]) {
        if (v == p) continue;
        if (visited[v]) return true;
        dfs(v, u);
        if (is_detected) return true;
    }
};

int main () {
    int n, m;
    cin>>n>>m;

    for (int i = 0; i < m; i++) {
        int u, v;
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    bool is_cycle = false;
    for (int i = 1; i <= n; i++) {
        if (visited[i]) continue;
        is_cycle = is_cycle || dfs(i);
    }

    if (is_cycle) cout<<"Cycle Detected"<<endl;
    else cout<<"No Cycle Detected"<<endl;

    /*
    Input:
    8
    7
    1 2
    2 3
    3 5
    2 4
    6 7
    6 8
    7 8

    Output:
    Cycle Detected
    */

    return 0;
}