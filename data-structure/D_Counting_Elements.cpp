#include<bits/stdc++.h>
using namespace std;

int main () {
    int N;
    cin>>N;
    vector <int> arr(N);
    for (int i=0; i<N; i++) cin>>arr[i];

    int count = 0;
    for (int i = 0; i<N; i++) {
        auto it = find(arr.begin(), arr.end(), arr[i]+1);
        if (it != arr.end()) {
            count++;
        }
    }
    cout<<count;

    return 0;
}