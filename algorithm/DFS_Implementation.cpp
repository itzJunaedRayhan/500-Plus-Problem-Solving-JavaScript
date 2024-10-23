#include<bits/stdc++.h>
using namespace std;

const int N = 1e5+5;
vector<int> adj[N];
bool visited[N];

void dfs (int u) {
    //  section 1 : actions just after entering node u:
    visited[u] = true;
    cout<<"Visiting Node: "<<u<<endl;
    for (int v : adj[u]) {
        //  section 2 : actions before entering a new subnode:
        if (visited[v] == true) continue;
        else dfs(v);
        // section 3 : actions after entering a new subnode:
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

    dfs(1);

    /*
    Input:
    10
    9
    1 2
    1 3
    1 1
    2 4
    3 5
    3 6
    4 7
    4 8
    6 9


    Output:
    Visiting Node: 1
    Visiting Node: 2
    Visiting Node: 4
    Visiting Node: 7
    Visiting Node: 8
    Visiting Node: 3
    Visiting Node: 5
    Visiting Node: 6
    Visiting Node: 9
    */
    return 0;
}