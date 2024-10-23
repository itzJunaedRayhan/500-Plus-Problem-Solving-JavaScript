#include<bits/stdc++.h>
using namespace std;

int main () {
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++) cin>>arr[i];

    //  Ascending Order:
    //  sort(arr, arr + n);

    //  Descending Order:
    sort(arr, arr+n, greater<int>());

    for (int i = 0; i < n; i++) cout<<arr[i]<<" ";

    return 0;
}