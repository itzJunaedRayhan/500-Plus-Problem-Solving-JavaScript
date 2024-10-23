#include<bits/stdc++.h>
using namespace std;

typedef pair<int, int> pii;
const int N = 1e3+10;
vector<string> adj;
int visited[N][N];
int n, m;
vector<pii> direc = {{0,-1},{0,1},{-1,0},{1,0}};

bool isValid (int i, int j) {
    return (i>=0 && i<n && j>=0 && j<m);
}

void dfs (int i, int j) {
    if (!isValid(i, j)) return;
    if (visited[i][j]) return;
    if (adj[i][j] == '#') return;
    visited[i][j] = true;
    for (auto value : direc) {
        dfs(i + value.first, j+value.second);
    }
}

int main () {
    cin>>n>>m;
    for (int i=0; i<n; i++) {
        string x;
        cin>>x;
        adj.push_back(x);
    }

    int count = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (adj[i][j] == '#') continue;
            if (visited[i][j]) continue;
            dfs(i, j);
            count++;
        }
    }

    cout<<count<<endl;


    /*
    Input:
    5 8
    ########
    #..#...#
    ####.#.#
    #..#...#
    ########

    Output:
    3
    */

    return 0;
}