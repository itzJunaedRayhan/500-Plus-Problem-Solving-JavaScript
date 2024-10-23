#include <bits/stdc++.h>
#define pii pair<int, int>
using namespace std;

const int N = 1e4+5;
const long long INF = 1e18+10;
vector<pii> adj[N];
long long dist[N];
bool NegativeCycle = false;
int n, E;

void bellmanFord (int S) {
    for (int i = 1; i <= n; i++) dist[i] = INF;
    dist[S] = 0;

    for (int i = 1; i <= n - 1; i++) {
        for (int j = 1; j <= n; j++) {
            for (const pii edge : adj[j]) {
                int v = edge.first;
                int w = edge.second;
                if (dist[j] != INF && dist[j] + w < dist[v]) 
                dist[v] = dist[j] + w;
            }
        }
    }

    for (int i = 1; i <= n; i++) {
        for (auto edge : adj[i]) {
            int v = edge.first;
            int w = edge.second;
            if (dist[i] != INF && dist[i] + w < dist[v]) {
                NegativeCycle = true;
                break;
            }
        }
    }
}

int main() {
    cin>>n>>E;
    for (int i = 0; i < E; i++) {
        int A, B, W;
        cin>>A>>B>>W;
        adj[A].push_back({B, W});
    }

    int S, T;
    cin>>S>>T;
    bellmanFord(S);
    while (T--) {
        int D;
        cin>>D;
        if (NegativeCycle) {
            cout<<"Negative Cycle Detected"<<endl;
            break;
        } else {
            if (dist[D] == INF) cout<<"Not Possible"<<endl;
            else cout<<dist[D]<<endl;
        }
    }

    return 0;
}