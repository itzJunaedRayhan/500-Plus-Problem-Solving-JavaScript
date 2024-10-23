#include<bits/stdc++.h>
using namespace std;

const int N = 1e5+5;
vector<int> adj[N];
bool visited[N];
int level[N];
int parent[N];

void bfs (int s) {
    queue<int> q;
    q.push(s);
    visited[s] = true;
    level[s] = 0;
    parent[s] = -1;

    while (!q.empty()) {
        int u = q.front();
        q.pop();
        for (int v : adj[u]) {
            if (visited[v] == true) continue;
            q.push(v);
            visited[v] = true;
            level[v] = level[u] + 1;
            parent[v] = u;
        }
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

    int s, d;
    cin>>s>>d;

    bfs(s);

    cout<<"Distance : "<<level[d]<<endl;

    //  path Finding:
    vector<int> path;
    int current = d;
    while (current != -1) {
        path.push_back(current);
        current = parent[current];
    }
    reverse(path.begin(), path.end());
    cout<<"Path : ";
    for (int value : path) cout<<value<<" ";


    /* 
    Input:
    7
    8
    1 2
    1 3
    3 4
    4 6
    2 5
    5 6
    5 7
    3 7
    1
    7

    Output:
    Distance : 2
    Path : 1 3 7 
    */

    return 0;
}