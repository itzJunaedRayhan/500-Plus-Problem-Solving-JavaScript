#include<bits/stdc++.h>
using namespace std;

int main () {
    int N;
    cin>>N;
    vector<int> A(N);
    for (int i=0; i<N; i++) cin>>A[i];
    vector<int> B(N);
    for (int i=0; i<N; i++) cin>>B[i];
    vector <int> C;

    B.insert(B.end(), A.begin(), A.end());
    C.insert(C.begin(), B.begin(), B.end());
    for (int i=0; i<C.size(); i++) cout<<C[i]<<" ";

    return 0;
}