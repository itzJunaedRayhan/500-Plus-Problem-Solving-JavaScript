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
    while (parent[node] != -1) {
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
        int leaderA = DSU_find(a);
        int leaderB = DSU_find(b);

        if (leaderA == leaderB) {
            cout<<"Cycle Detected in between : "<<a <<" "<<b <<endl;
        } else {
            DSU_union(a, b);
        }
    };


    /*
    Input:
    5 5
    4 5
    1 2
    2 5
    1 4
    2 3

    Output:
    Cycle Detected in between : 1 4
    */

    return 0;
}