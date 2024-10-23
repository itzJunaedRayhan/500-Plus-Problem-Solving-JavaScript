#include<bits/stdc++.h>
using namespace std;

int main () {
    int *a = new int[5];
    for (int i = 0; i < 5; i++) cin>>a[i];

    int *b = new int[7];
    for (int i = 0; i <5; i++) b[i] = a[i];
    b[5] = 60;
    b[6] = 70;

    //  Print Size of 7 b array:
    for (int i = 0; i < 7; i++) cout<<b[i]<<" ";

    // delete an array:
    delete[] a;
    return 0;
}