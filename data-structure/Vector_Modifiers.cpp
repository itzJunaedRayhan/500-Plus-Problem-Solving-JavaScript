#include<bits/stdc++.h>
using namespace std;

int main () {
    //  Vector Assign:
    vector <int> x = {10, 20, 30, 40};
    vector <int> v = {1, 2, 3};
    v = x;      //  time complexity - O(N) ::: if both vector's size is same than the complexity will - O(1):
    for (int i = 0; i < v.size(); i++) 
    cout<<v[i]<<" "; cout<<endl;


    //  v.push_back(); - Add an element to the end:
    v.push_back(50);
    for (int i = 0; i < v.size(); i++) 
    cout<<v[i]<<" ";    cout<<endl;     //  10 20 30 40 50 


    //  v.pop_back(); - Remove an element from the end:
    v.pop_back();
    for (int i = 0; i < v.size(); i++) 
    cout<<v[i]<<" ";    cout<<endl;     //  10 20 30 40 



    // v.insert(*where, what); - Insert elements at a specific position:
    //  Let's insert a value 112 in second index of my vector:
    v.insert(v.begin() + 2, 112);
    for (int x : v) cout<<x<<" "; cout<<endl;       //  10 20 112 30 40 



    //  insert a vector into a vector by insert(where, start, end):
    vector <int> v2 = {1, 2, 3, 4, 5};
    vector <int> v3 = {101, 102, 103};
    v2.insert(v2.begin() + 2, v3.begin(), v3.end());
    for (int x : v2) cout<<x<<" "; cout<<endl;      //  1 2 101 102 103 3 4 5 



    return 0;
}