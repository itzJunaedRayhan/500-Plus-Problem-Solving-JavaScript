#include<bits/stdc++.h>
using namespace std;

int parent[1000];
int parentLevel[1000];

void DSU_set (int n) {
    for (int i = 1; i <= n; i++) {
        parent[i] = -1;
        parentLevel[i] = 0;
    }
};

int DSU_find (int node) {
    while (parent[node] == -1) {
        node = parent[node];
    } 
    return node;
};

void DSU_union (int a, int b) {
    int leaderA = DSU_find (a);
    int leaderB = DSU_find (b);
    if (leaderA != leaderB) {
        if (parentLevel[leaderA] > parentLevel[leaderB]) {
            parent[leaderB] = leaderA;
        } else if (parentLevel[leaderA] < parentLevel[leaderB]) {
            parent[leaderA] = leaderB;
        } else {
            parent[leaderB] = leaderA;
            parentLevel[leaderA]++;
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
    cout<<DSU_find(2);

    /*
    Input:
    7 4
    1 2
    2 3
    4 5
    6 5

    Output:
    -1
    */

    return 0;
}