#include<bits/stdc++.h>
using namespace std;

const int N = 20;
vector<vector<int>> adj(N);

int main() {
    int n, m;
    cin>>n>>m;
    
    for (int i = 0; i < m; i++) {
        int A, B;
        cin>>A>>B;
        adj[A].push_back(B);
        adj[B].push_back(A);
    }

    int k;
    cin>>k;  
    cout<<adj[k].size()<<endl;

    return 0;
}
