#include<bits/stdc++.h>
using namespace std;

int main () {
    int arr[5] = {10, 20, 30, 40, 50};              

    vector<int> v = {100, 200, 300, 400, 500};

    list<int> listName;

    list <int> myList (10, 5);                          //  5 5 5 5 5 5 5 5 5 5 
    
    list<int> myList2 = {1, 2, 3, 4, 5, 6, 7};          //  1 2 3 4 5 6 7 

    list <int> myList3 (myList2);                       //  1 2 3 4 5 6 7 

    list <int> myList4 (arr, arr + 5);                  //  10 20 30 40 50 

    list <int> myList5 (v.begin(), v.end());            //  100 200 300 400 500


    for (auto it = myList4.begin(); it != myList4.end(); it++) {
        cout<<*it<<" ";
    }

    cout<<endl;

    for (int value : myList5) {
        cout<< value <<" ";
    }

    return 0;
}