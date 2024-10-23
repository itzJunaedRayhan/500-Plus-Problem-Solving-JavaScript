#include <bits/stdc++.h>
#define pi pair<int, int>
using namespace std;

const int N = 1e5+5;
bool visited[N];
int dist[N];
vector<pi> adj[N];

void dijkstra (int S) {
    priority_queue <pi, vector<pi>, greater<pi>> pq;
    dist[S] = 0;
    pq.push({dist[S], S});

    while (!pq.empty()) {
        pi parent = pq.top();
        pq.pop();
        int parentNode = parent.second;
        if (visited[parentNode]) continue;
        visited[parentNode] = true;

        long long parentWeight = parent.first;
        for (auto child : adj[parentNode]) {
            long long childNode = child.first;
            long long childWeight = child.second;
            if (parentWeight + childWeight < dist[childNode]) {
                dist[childNode] = parentWeight + childWeight;
                pq.push({dist[childNode], childNode});
            }
        }
    }
};

int main() {
    int n, E;
    cin>>n>>E;
    while (E--) {
        int A, B;
        long long W;
        cin>>A>>B>>W;
        adj[A].push_back({B, W});
    }

    for (int i = 1; i <= n; i++) dist[i] = INT_MAX;
    int S;
    cin>>S;
    dijkstra(S);

    int T;
    cin>>T;
    while (T--) {
        int D, DW;
        cin>>D>>DW;
        if (dist[D] <= DW) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }

    return 0;
}