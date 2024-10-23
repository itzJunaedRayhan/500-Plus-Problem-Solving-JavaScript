#include<bits/stdc++.h>
using namespace std;

const int N = 1e5 + 5;
int parent[N];
int parentLevel[N];
int cycleEdges = 0;

void DSU_set (int n) {
    for (int i = 1; i <= n; i++) {
        parent[i] = -1;
        parentLevel[i] = 0;
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
        if (parentLevel[leaderA] > parentLevel[leaderB]) {
            parent[leaderB] = leaderA;

        } else if (parentLevel[leaderA] < parentLevel[leaderB]) {
            parent[leaderA] = leaderB;

        } else {
            parent[leaderB] = leaderA;
            parentLevel[leaderA]++;
        }
    } else {
        cycleEdges++;
    }
};

int main () {
    int n, E;
    cin>>n>>E;
    DSU_set(n);

    while (E--) {
        int A, B;
        cin>>A>>B;
        int leaderA = DSU_find(A);
        int leaderB = DSU_find(B);
        if (leaderA == leaderB) cycleEdges++;
        else DSU_union(A, B);
    };

    cout<<cycleEdges<<endl;

    return 0;
}