#include<bits/stdc++.h>
using namespace std;

int main () {
    int T;
    cin>>T;

    for (int i=0; i<T; i++) {
        int N;
        cin>>N;
        map<int, int> mp;
        for (int j=0; j<N; j++) {
            int x;
            cin>>x;
            mp[x]++;
        }
        
        int maxValue = 0;
        int maxNumOfValue = 0;
        for (auto it : mp) {
            if (it.second > maxNumOfValue || (it.second == maxNumOfValue && it.first > maxValue)) {
                maxValue = it.first;
                maxNumOfValue = it.second;
            }
        }
        cout<<maxValue<<" "<<maxNumOfValue<<endl;
    }

    return 0;
}