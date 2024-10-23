#include<bits/stdc++.h>
using namespace std;

int main () {
    list <int> myList = {10, 20, 30};
    list <int> myList2 = {40, 50};
    list <int> newList;

    //  Assign:
    newList = myList;                                       //  10, 20, 30
    newList.assign(myList2.begin(), myList2.end());         //  40, 50

    //  myList.push_back() - Add an element to the tail.
    newList.push_back(60);

    //  myList.push_front() - Add an element to the head.
    newList.push_front(0);

    //  myList.pop_back() - Delete the tail.
    newList.pop_back();

    //  myList.pop_front() - Delete the head.
    newList.pop_front();

    //  myList.insert() - Insert elements at a specific position.
    newList.insert(next(newList.begin(), 2), {200, 300});         //  40 50 200 300

    //  myList.erase() - Delete elements from a specific position.
    newList.erase(next(newList.begin(), 1), next(newList.begin(), 3));                   //   40 300 

    //  replace(myList.begin(),myList.end(), value,replace_value):
    //  Replace all the value with replace_value:
    replace(newList.begin(), newList.end(), 300, 50);                                   //  40, 50
    for (int value : newList) cout<<value<<" ";

    //  find
    auto it = find(newList.begin(), newList.end(), 60);
    if (it == newList.end()) {
        cout<<"Not Found!"<<endl;
    } else {
        cout<<"Found"<<endl;
    }
 
    return 0;
}