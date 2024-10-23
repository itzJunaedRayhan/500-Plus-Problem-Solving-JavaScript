#include<bits/stdc++.h>
using namespace std;

int main () {
    //  replace
    //  Replaced all the value which is 2 by 100:
    vector<int>v={1,2,2,4,3,5,1,2,4,5,3,2};
    replace(v.begin(),v.end(),2,100);
    for(int x:v) cout<<x<<" ";          //  1 100 100 4 3 5 1 100 4 5 3 100
    cout<<endl;

    //  find 
    //  find the value of 100 which is exist on the vector or not:
    vector<int>v2={1,2,2,4,3,5,1,2,4,5,3,2};
    auto it = find(v2.begin(),v2.end(),100);
    if(it == v2.end()) cout<<"Not found";
    else cout<<"Found";

    return 0;
}