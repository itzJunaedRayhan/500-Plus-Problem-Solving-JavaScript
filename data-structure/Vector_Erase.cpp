#include<bits/stdc++.h>
using namespace std;
int main() {
    vector<int>v={1,2,3,4,5};
    v.erase(v.begin()+3);
    for(int x:v) cout<<x<<" ";cout<<endl;       //  1 2 3 5 


    vector<int>v2={1,2,3,4,5,6};
    v2.erase(v2.begin()+1,v2.begin()+4); 
    for(int x:v2) cout<<x<<" ";                 //  1 5 6 
    cout<<endl;


    vector<int>v3={1,2,3,4,5,6};
    v3.erase(v3.begin()+1,v3.end()-1);
    for(int x:v3) cout<<x<<" ";                 //  1 6
    
    return 0;
}