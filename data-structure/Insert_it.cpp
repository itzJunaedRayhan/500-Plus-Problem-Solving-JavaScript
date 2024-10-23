#include<bits/stdc++.h>
using namespace std;

int main () {
    int N, M;
    cin>>N;
    vector <int> A(N);
    for (int i=0; i<N; i++) cin>>A[i];
    cin>>M;
    vector <int> B(M);
    for (int i=0; i<M; i++) cin>>B[i];
    int X;
    cin>>X;

    A.insert(A.begin() + X, B.begin(), B.end());
    for (int value : A) cout<<value<<" ";

    return 0;
}