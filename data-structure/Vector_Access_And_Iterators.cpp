#include<bits/stdc++.h>
using namespace std;

int main () {
    vector<int> v={1,2,3,4,5};

    //  Access Last Element of vector:
    cout<<v[v.size()-1]<<endl;
    cout<<v.back()<<endl;

    //  Access First Element of vector:
    cout<<v[0]<<endl;
    cout<<v.front()<<endl;

    //  Iterator:
    vector <int> v2 = {10, 20, 30, 40, 50, 60};
    vector<int>::iterator it;
    for(auto it=v2.begin(); it<v2.end(); it++)
    cout<<*it<<" ";
    
    return 0;
}