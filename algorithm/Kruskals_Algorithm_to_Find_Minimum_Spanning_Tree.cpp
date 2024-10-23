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
    int n, e;
    cin>>n>>e;
    vector<Edge> edges;
    vector<Edge> ans;
    DSU_set(n);

    while (e--) {
        int u, v, w;
        cin>>u>>v>>w;
        edges.push_back(Edge(u, v, w));
    }

    sort(edges.begin(), edges.end(), cmp);

    for (Edge value : edges) {
        int u = value.u;
        int v = value.v;
        int w = value.w;
        int leaderA = DSU_find(u);
        int leaderB = DSU_find(v);
        if (leaderA == leaderB) continue;
        ans.push_back(value);
        DSU_union(u, v);
    }

    for (Edge value : ans) 
    cout<<value.u<<" "<<value.v<<" "<<value.w<<endl;

    /*
    Input:
    7 11
    1 2 5
    1 3 7
    3 2 9
    3 5 8
    5 6 5
    3 6 7
    2 4 6
    2 6 15
    4 6 8
    4 7 11
    6 7 9


    Output:
    1 2 5
    5 6 5
    2 4 6
    1 3 7
    3 6 7
    6 7 9
    */

    return 0;
}