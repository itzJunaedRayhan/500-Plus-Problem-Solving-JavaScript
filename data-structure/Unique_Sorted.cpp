#include<bits/stdc++.h>
using namespace std;

int main () {
    int T;
    cin>>T;

    for (int i = 0; i < T; i++) {
        set<int, greater<int>> s;
        int N;
        cin>>N;

        for (int j = 0; j < N; j++) {
            int x;
            cin>>x;
            s.insert(x);
        }
        for (auto it = s.begin(); it != s.end(); ++it) {
            cout<<*it<<" ";
        };
        cout<<endl;
    }

    return 0;
}