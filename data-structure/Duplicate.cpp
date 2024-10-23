#include<bits/stdc++.h>
using namespace std;

int main () {
    int N;
    cin>>N;
    int arr[N];
    for (int i = 0; i < N; i++) cin>>arr[i];

    sort(arr, arr+N);

    int j = 1; int flag = 0;
    for (int i = 0; i < N; i++) {
        if (arr[i] == arr[j]) flag = 1;
        j++;
    }

    if (flag == 1) cout<<"YES";
    else cout<<"NO";

    return 0;
}