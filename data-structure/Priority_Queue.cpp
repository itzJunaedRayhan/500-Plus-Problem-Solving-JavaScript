#include<bits/stdc++.h>
using namespace std;

int main () {
    priority_queue<int, vector<int>, greater<int>> pq;
    while (true) {
        int c;
        cin>>c;
        if (c == 0) {
            int x;
            cin>>x;
            pq.push(x);             // O(LogN)
        } else if (c == 1) {
            pq.pop();               // O(logN)
        } else if (c == 2) {
            cout<<pq.top()<<endl;   //  O(1);
        } else break;
    }

    /*
    -Input-:
    0 10
    0 20
    0 5
    2
    1
    0 100
    2
    1
    0 8
    2
    3

    _Output_:
    5
    10
    20
    8
    */

    return 0;
}