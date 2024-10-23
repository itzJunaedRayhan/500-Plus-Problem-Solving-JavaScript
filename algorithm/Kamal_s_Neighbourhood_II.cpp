#include<bits/stdc++.h>
using namespace std;

const int N = 20;
vector<vector<int>> adj(N);
bool visited[N];

void dfs (int u) {
    visited[u] = true;
    for (int v : adj[u]) {
        if (visited[v] == true) continue;
        else dfs(v);
    }
};

int main () {
    int n, m;
    cin>>n>>m;

    for (int i = 0; i < m; i++) {
        int A, B;
        cin>>A>>B;
        adj[A].push_back(B);
    }

    int k;
    cin>>k;
    for (int i = 0; i < n; i++) visited[i] = false;
    
    dfs(k);

    int cnt = 0;
    for (int i = 0; i < n; i++) {
        if (visited[i]) cnt = cnt + 1;
    }

    cout<<cnt-1<<endl;

    return 0;
}