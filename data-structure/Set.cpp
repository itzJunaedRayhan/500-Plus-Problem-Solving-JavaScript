#include<bits/stdc++.h>
using namespace std;

int main () {
    set<int> s;
    int n;
    cin>>n;
    while (n--) {
        int x;
        cin>>x;
        s.insert(x);                //  O(LogN)
    };

    for (auto it = s.begin(); it != s.end(); ++it) {
        cout<<*it<<" ";
    };

    cout<<endl<<s.count(100)<<endl;       //  O(logN)

    if (s.count(1000)) cout<<"Yes"<<endl;
    else cout<<"No"<<endl;

    /*
    Set Usally Remove all duplicate and sort the set with Ascending Order:

    Input:
    11
    10 2 10 20 100 7 3 100 5 3 7


    Output:
    2 3 5 7 10 20 100 
    1
    No
    */

    return 0;
}