#include<bits/stdc++.h>
using namespace std;

int main () {
    int n;
    cin>>n;
    vector<string> v;
    for (int i=0;i<n;i++) {
        string s;
        cin>>s;
        v.push_back(s);
    }
    for (string val: v) cout<<val<<endl;
    

    //  If We Declare Vector size:
    int s;
    cin>>s;
    vector <string> v2 (s);
    for (int i=0; i< s; i++)
    cout<<v2[i]<<endl;
    
    for (string val: v) cout<<val<<endl;
    
    return 0;
}