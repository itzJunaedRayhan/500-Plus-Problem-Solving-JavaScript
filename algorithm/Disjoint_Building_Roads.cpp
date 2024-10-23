#include<bits/stdc++.h>
using namespace std;

const int N = 1e5 + 5;
int parent[N];
int parentLevel[N];

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
    
    map <int, bool> mp;
    for (int i = 1; i <= n; i++) {
        int ldr = DSU_find(i);
        mp[ldr] = true;
    }

    vector<int> v;
    for (pair<int, bool> p : mp) {
        v.push_back(p.first);
    }

    cout<<v.size() - 1<<endl;

    for (int i = 0; i < v.size() - 1; i++) {
        cout << v[i] << " " << v[i + 1] << endl;
    }

    return 0;
}