#include<bits/stdc++.h>
using namespace std;

int main () {
    list <int> myList = {20, 40, 10, 20, 50, 30, 10, 30, 10};
    cout<<myList.back()<<endl;
    cout<<myList.front()<<endl;
    cout<<*next(myList.begin(), 1);

    return 0;
}