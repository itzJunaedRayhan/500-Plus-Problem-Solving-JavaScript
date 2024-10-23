#include<bits/stdc++.h>
using namespace std;

const int N = 1e3+5;
int adjMat[N][N];

//  Unidirected, Weighted Graph - Adjacency matrix Represntation.
int main () {
    int n, m;
    cin>>n>>m;

    for (int i = 0; i < m; i++) {
        int u, v, w;
        cin>>u>>v>>w;
        adjMat[u][v] = w;
        adjMat[v][u] = w;
    }

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cout<<adjMat[i][j]<<" ";
        }
        cout<<endl;
    }

    /*
    Input:
    4
    5
    1 2 8
    1 3 9
    2 4 6
    4 3 5
    3 2 2

    Output:
    0 8 9 0 
    8 0 2 6 
    9 2 0 5 
    0 6 5 0 
    */

    return 0;
}