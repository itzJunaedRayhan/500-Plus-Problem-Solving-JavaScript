#include<bits/stdc++.h>
using namespace std;

int main () {
    // type-1 - vector init:
    vector <int> v;



    // type-2 - vector init with size declare:
    vector <int> v1(5);
    cout<<endl<<v1.size()<<endl;



    // type-3 - vector init with size declare and same value assign:
    vector <int> v2(5, 10);
    for (int i = 0; i < v2.size(); i++) 
    cout<<v2[i]<<" ";      //   10 10 10 10 10 
    cout<<endl;



    // type-4 - copy vector elements into another vector:
    vector <int> v3(5, 20);
    vector <int> v4(v3);
    for (int i = 0; i < v4.size(); i++) 
    cout<<v4[i]<<" ";       //  20 20 20 20 20
    cout<<endl; 



    //  type-5 copy array elements into a vector:
    int arr[6] = {1, 2, 3, 4, 5, 6};
    vector<int> v5(arr, arr+6);
    for (int i = 0; i < v5.size(); i++) 
    cout<<v5[i]<<" ";
    cout<<endl;



    //  type-6 - vector init with size declare and different value assign:
    vector <int> v6 = {10, 20, 30, 40, 50, 60};
    for (int i = 0; i < v6.size(); i++) 
    cout<<v6[i]<<" ";



    return 0;
}