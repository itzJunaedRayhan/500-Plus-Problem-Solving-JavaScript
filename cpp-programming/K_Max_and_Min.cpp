#include<bits/stdc++.h>
using namespace std;

int main () {
    int X, Y, Z;
    cin>>X>>Y>>Z;

    int maxNum, minNum;
    maxNum = max({X, Y, Z});
    minNum = min({X, Y, Z});
    cout<<minNum<<" "<<maxNum;

    return 0;
}