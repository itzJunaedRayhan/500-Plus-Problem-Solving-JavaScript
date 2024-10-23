#include<bits/stdc++.h>
using namespace std;

int main () {
    list <int> myList = {20, 40, 10, 50, 10, 30, 10};

    //  myList.remove(V) - Remove the value V from the list.
    myList.remove(10);  //  20 40 50 30 

    //  myList.sort() - Sort the list in ascending order.
    myList.sort();                  //  20 30 40 50

    //  myList.sort(greater<type>()) - Sort the list in descending order:
    myList.sort(greater<int>());    //  50 40 30 20 

    //  myList.unique() - Deletes the duplicate values from the list. 
    //  You must sort the list first.
    list <int> myList2 = {20, 40, 10, 20, 50, 30, 10, 30, 10};
    myList2.sort();
    myList2.unique();

    //  myList.reverse() Reverse the list.
    myList2.reverse();

    for (int value : myList2) cout<< value <<" ";

    return 0;
}