#include<bits/stdc++.h>
using namespace std;

int main () {
    //  Get Input in Vector:
    //   When we don't declare vector size:
    vector<int> v;
    int n;
    cin>>n;
    for (int i=0;i<n;i++) {
        int x;
        cin>>x;
        v.push_back(x);
    }
    for(int val:v) cout<<val<<" ";


    //   Get Input in second way:
    //   When we declare vector size:
    int size;
    cin>>size;
    vector<int> v2(size);
    for(int i=0;i<size;i++) cin>>v2[i];
    for(int val: v2) cout<<val<<" ";

    return 0;
}