#include<bits/stdc++.h>
using namespace std;

const int N = 1e5 + 5;
int parent[N];
int parentSize[N];

class Edge {
    public:
    int u, v, w;
    Edge(int u, int v, int w) {
        this->u = u;
        this->v = v;
        this->w = w;
    }
};

bool cmp (Edge a, Edge b) {
    return a.w < b.w;
};

void DSU_set (int n) {
    for (int i = 1; i <= n; ++i) {
        parent[i] = -1;
        parentSize[i] = 1;
    }
};

int DSU_find (int node) {
    while (parent[node] != -1) {
        node = parent[node];
    }
    return node;
};

void DSU_union (int a, int b) {
    int leaderA = DSU_find(a);
    int leaderB = DSU_find(b);
    if (leaderA != leaderB) {
        if (parentSize[leaderA] > parentSize[leaderB]) {
            parent[leaderB] = leaderA;
            parentSize[leaderA] += parentSize[leaderB];
        } else {
            parent[leaderA] = leaderB;
            parentSize[leaderB] += parentSize[leaderA];
        }
    }
};

int main () {
    int n, E;
    cin>>n>>E;
    vector<Edge> edges;
    DSU_set(n);
    while (E--) {
        int u, v, w;
        cin>>u>>v>>w;
        edges.push_back(Edge(u, v, w));
    }

    sort(edges.begin(), edges.end(), cmp);

    long long totalCost = 0;
    long long connectedEdges = 0;
    for (Edge value : edges) {
        int u = value.u;
        int v = value.v;
        int w = value.w;
        int leaderA = DSU_find(u);
        int leaderB = DSU_find(v);
        if (leaderA == leaderB) continue;
        totalCost += (long long) w;
        DSU_union(u, v);
        connectedEdges++;
        if (connectedEdges == n - 1) break;
    }

    if (connectedEdges == n - 1) cout<<totalCost<<endl;
    else cout<<-1<<endl;
   
    return 0;
}