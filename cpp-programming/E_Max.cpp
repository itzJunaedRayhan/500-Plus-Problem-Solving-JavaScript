#include<bits/stdc++.h>
using namespace std;

int main () {
    int N;
    cin>>N;
    int arr[N];
    for (int i = 0; i < N; i++) cin>>arr[i];

    int maxValue = INT_MIN;
    for (int i = 0; i < N; i++) maxValue = max(maxValue, arr[i]);
    cout<<maxValue;

    return 0;
}