#include<bits/stdc++.h>
using namespace std;

int main () {
    int T, N;
    cin>>T>>N;

        vector<int> arr(N);
        for (int i = 0; i < N; i++) cin>>arr[i];
        vector <int> arrTwo(N);
        arrTwo = arr;
        sort(arrTwo.begin(), arrTwo.end());

        int flag = 1;
        for (int i = 0; i < N; i++) {
            if (arr[i] != arrTwo[i]) {
                flag = 0;
                break; 
            }
        }

        if (flag == 1) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    
    return 0;
}