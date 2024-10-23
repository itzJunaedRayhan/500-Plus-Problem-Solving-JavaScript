#include <bits/stdc++.h>
using namespace std;

int main() {  
    int T;
    cin>>T;

    while (T--) {
        int N;
        cin>>N;
        int S = 0;
        int arr[N];

        for (int i = 0; i < N; i++) {
            cin>>arr[i];
            S = S + arr[i];
        }

        if (S % 2 == 0) {
            int sum = S / 2;
            bool dp[N + 1][sum + 1];
            dp[0][0] = true;

            for (int i = 1; i <= sum; i++) dp[0][i] = false;
            for (int i = 1; i <= N; i++) {
                for (int j = 0; j <= sum; j++) {
                    if (arr[i - 1] <= j) dp[i][j] = dp[i - 1][j - arr[i - 1]] || dp[i - 1][j];
                    else dp[i][j] = dp[i - 1][j];
                }
            }
            if (dp[N][sum]) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        } else cout << "NO" << endl;
    }

    return 0;
}