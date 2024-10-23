#include<bits/stdc++.h>
using namespace std;

int main () {
    int N;
    cin>>N;
    int arr[N];
    long long arrTwo[N];
    for (int i = 0; i < N; i++) cin>>arr[i];

    arrTwo[0] = arr[0];
    for (int i = 1; i < N; i++) arrTwo[i] = arr[i] + arrTwo[i-1];
    for (int i = N-1; i >= 0; i--) cout<<arrTwo[i]<<" ";
    return 0;
}