#include<bits/stdc++.h>
using namespace std;

int main () {
    vector <int> v;

    //  vector.max_size();
    cout<<v.max_size()<<endl;   //  1073741823



    // vector.capacity();   
    //  its increase its capacity by double size:
    cout<<v.capacity()<<endl;   //  0
    v.push_back(10);
    cout<<v.capacity()<<endl;   //  1
    v.push_back(20);
    cout<<v.capacity()<<endl;   //  2
    v.push_back(30);
    cout<<v.capacity()<<endl;   //  4



    //  vector.clear();
    //  its clear the size but the elements still exists on the memory:
    v.clear();  
    for (int i = 0; i < v.size(); i++) 
    cout<<v[i]<<" ";
    //  the elements still exists on the memory: so we can access the elements after clear();
    cout<<v[2]<<endl;   //  30



    //  isEmpty():
    cout<<v.empty()<<endl;



    //  v.resize();
    vector <int> v2 = {10, 20, 30, 40, 50, 60};
    v2.resize(2);       //  for this line it will show - 10 20 
    v2.resize(7, 55);   // for this line it will show - 10 20 55 55 55 55 55 
    for (int i = 0; i < v2.size(); i++) 
    cout<<v2[i]<<" ";   //  10 20 55 55 55 55 55 

    return 0;
}