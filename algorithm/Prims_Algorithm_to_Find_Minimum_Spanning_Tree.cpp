#include<bits/stdc++.h>
#define pi pair<int, int>
using namespace std;

const int N = 1e5 + 5;
vector<pi> NodesPair[N];
bool visited[N];

class Edge {
    public:
    int u, v, w;
    Edge(int u, int v, int w) {
        this->u = u;
        this->v = v;
        this->w = w;
    }
};

class cmp {
    public:
    bool operator()(Edge a, Edge b) {
        return a.w > b.w;
    }
};

void prims (int s) {
    priority_queue<Edge, vector<Edge>, cmp> pq;
    vector<Edge> edges;
    pq.push(Edge(s, s, 0));
    while (!pq.empty()) {
        Edge parent = pq.top();
        pq.pop();
        int u = parent.u;
        int v = parent.v;
        int w = parent.w;
        if (visited[v]) continue;
        visited[v] = true;
        edges.push_back(parent);
        for (int i = 0; i < NodesPair[v].size(); i++) {
            pi child = NodesPair[v][i];
            if (!visited[child.first]) pq.push(Edge(v, child.first, child.second));
        }
    }
    edges.erase(edges.begin());
    for (Edge val : edges) 
    cout<<val.u<<" "<<val.v<<" "<<val.w<<endl;
};

int main () {
    int n, e;
    cin>>n>>e;
    while (e--) {
        int a, b, w;
        cin>>a>>b>>w;
        NodesPair[a].push_back({b, w});
        NodesPair[b].push_back({a, w});
    }

    prims(1);

    /*
    Input:
    8 10
    1 5 2
    1 2 4
    1 4 10
    5 4 5
    2 4 8
    2 3 18
    3 4 11
    4 8 9
    4 7 11
    6 2 8

    Output:
    1 5 2
    1 2 4
    5 4 5
    2 6 8
    4 8 9
    4 7 11
    4 3 11
    */

    return 0;
}