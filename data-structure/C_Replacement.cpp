#include<bits/stdc++.h>
using namespace std;

int main () {
    int N;
    cin>>N;
    int arr[N];
    for (int i=0; i<N; i++) cin>>arr[i];

    for (int i=0; i<N; i++) {
        if (arr[i] < 0) arr[i] = 2;
        else if (arr[i] > 0) arr[i] = 1;
    }
    for (int i=0; i<N; i++) cout<<arr[i]<<" ";

    return 0;
}