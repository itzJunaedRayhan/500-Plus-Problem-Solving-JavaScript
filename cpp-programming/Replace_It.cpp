#include<bits/stdc++.h>
using namespace std;

int main () {
    int T;
    cin>> T;
    
    for (int i = 0; i < T; i++) {
        string S, X;
        cin>>S>>X;
        
        while(S.find(X) != -1) {
            S.replace(S.find(X), X.size(), "$");
        }
        cout<<S<<endl;
    }
    return 0;
}