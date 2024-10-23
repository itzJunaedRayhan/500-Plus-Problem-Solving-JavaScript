#include<bits/stdc++.h>
using namespace std;

int parent[1000];
int parentSize[1000];

void DSU_set (int n) {
    for (int i = 0; i <= n; i++) {
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

main () {
    int n, e;
    cin >> n >> e;
    DSU_set(n);

    while (e--) {
        int a, b;
        cin >> a >> b;
        DSU_union(a, b);
    };
    cout<<DSU_find(6);

    /*
    Input:
    7 4
    1 2
    2 3
    4 5
    6 5

    Output:
    5
    */

    return 0;
}