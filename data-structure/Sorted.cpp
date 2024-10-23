#include<bits/stdc++.h>
using namespace std;

int main () {
    int T;
    cin>>T;

    for (int i = 0; i < T; i++) {
        int N;
        cin>>N;
        vector<int> arr(N);
        for (int j = 0; j < N; j++) cin>>arr[j];
        vector <int> arrTwo(N);
        
        arrTwo = arr;
        sort(arrTwo.begin(), arrTwo.end());

        int flag = 1;
        for (int k = 0; k < N; k++) {
            if (arr[k] != arrTwo[k]) {
                flag = 0;
                break; 
            }
        }

        if (flag == 1) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    } 
    return 0;
}