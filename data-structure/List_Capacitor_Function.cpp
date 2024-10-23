#include<bits/stdc++.h>
using namespace std;

int main () {
    list <int> myList = {10, 20, 30};

    //   Size:
    cout<<myList.size()<<endl;

    //  max.size();
    cout<<myList.max_size()<<endl;

    //  resize();
    myList.resize(2);       //  10, 20
    myList.resize(5, 100);  //  10, 20, 100, 100, 100
    for (int value : myList) cout<<value<<" "<<endl;

    //  clear();
    myList.clear();
    cout<<myList.size()<<endl;

    return 0;
}