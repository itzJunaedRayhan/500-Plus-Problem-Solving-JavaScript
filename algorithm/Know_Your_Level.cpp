#include<bits/stdc++.h>
using namespace std;

const int N = 1e5+5;
vector<int> adj[N];
bool visited[N];
int level[N];

void bfs(int s) {
    queue<int> q;
    q.push(s);
    visited[s] = true;
    level[s] = 0;

    while (!q.empty()) {
        int u = q.front();
        q.pop();
        for (int v : adj[u]) {
            if (visited[v] == true) continue;
            q.push(v);
            visited[v] = true;
            level[v] = level[u] + 1;
        }
    }
};

int main() {
    int n,m;
    cin>>n>>m;
    for (int i = 0; i < m; i++) {
        int A, B;
        cin>>A>>B;
        adj[A].push_back(B);
        adj[B].push_back(A);
    }

    bfs(0);

    int L;
    cin>>L;
    vector<int> v;
    for (int i = 1; i <= N; i++) {
        if (level[i] == L) {
            v.push_back(i);
        }
    }

    if (v.empty()) cout<<"-1"<<endl;
    else if (L == 0) cout<<"0"<<endl;
    else {
        sort(v.begin(), v.end());
        for (int node : v) cout << node << " ";
    } 

    return 0;
}