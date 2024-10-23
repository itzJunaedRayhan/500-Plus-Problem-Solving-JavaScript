#include<bits/stdc++.h>
using namespace std;

const int N = 1e5+5;
vector<int> adj[N];
int level[N];

void bfs (int S) {
    queue<int> q;
    q.push(S);
    level[S] = 0;

    while (!q.empty()) {
        int u = q.front();
        q.pop();
        for (int v : adj[u]) {
            if (level[v] == -1) {
                q.push(v);
                level[v] = level[u] + 1;
            }
        }
    }
};

int main () {
    int n,m;
    cin>>n>>m;
    for (int i = 0; i < m; i++) {
        int A, B;
        cin>>A>>B;
        adj[A].push_back(B);
        adj[B].push_back(A);
    }

    int Q;
    cin>>Q;
    while (Q--) {
        int S, D;
        cin>>S>>D;
        for (int i = 0; i < N; i++) {
            level[i] = -1;
        }

        bfs(S);
        cout<<level[D]<<endl;
    }
    
    return 0;
}
