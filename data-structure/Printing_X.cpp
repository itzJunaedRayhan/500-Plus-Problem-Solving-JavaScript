#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin>>N;

    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= N; j++) {
            if (j == i || (j == N - i + 1)) {
                if (i == (N + 1) / 2) {
                    cout<<"X";
                } else if (i <= N / 2) {
                    if (j <= N / 2) cout<<"\\";
                    else cout<<"/";
                } else {
                    if (j <= N / 2) cout<<"/";
                    else cout<<"\\";
                }
            } else cout<<" ";
        }
        cout<<endl;
    }

    return 0;
}