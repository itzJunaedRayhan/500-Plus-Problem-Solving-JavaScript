#include<bits/stdc++.h>
using namespace std;

const int N = 1e5+5;
vector<pair<int, int>> adj[N];

//  Directed Weighted Graph Representation by Adjancency List:
int main () {
    int n, m;
    cin>>n>>m;

    for (int i = 0; i < m; i++) {
        int u, v, w;
        cin>>u>>v>>w;
        adj[u].push_back(make_pair(v, w));
    }

    for (int i = 1; i <= n; i++) {
        cout<<"List "<<i<<" : ";
        for (auto j : adj[i]) {
            cout<<"("<<j.first;
            cout<<", "<<j.second<<"), ";
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
    List 1 : 2 3 
    List 2 : 1 4 3 
    List 3 : 1 4 2 
    List 4 : 2 3 
    */

    return 0;
}