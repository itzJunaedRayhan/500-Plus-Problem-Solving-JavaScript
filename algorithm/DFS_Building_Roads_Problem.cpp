#include<bits/stdc++.h>
using namespace std;

const int N = 1e5+10;
vector<int> adj[N];
vector<bool> visited(N, false);
void dfs (int u) {
    visited[u] = true;
    for (int v : adj[u]) {
        if (visited[v]) continue;
        dfs(v);
    }
}

int main () {
    int n, m;
    cin>>n>>m;

    for (int i = 0; i < m; i++) {
        int u, v;
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    vector<int> leaders;
    for (int i = 1; i <= n; i++) {
        if (visited[i]) continue;
        leaders.push_back(i);
        dfs(i);
    }

    cout<<"Total Leaders: "<<leaders.size()-1<<endl;
    for (int i = 1; i < leaders.size(); i++) {
        cout<<leaders[i-1]<<" "<<leaders[i]<<endl;
    }

    /*
    Input:
    8 4
    1 2
    3 4
    5 6
    5 7

    Output:
    Total Leaders: 3
    1 3
    3 5
    5 8
    */

    return 0;
}