#include <bits/stdc++.h>
using namespace std;

int Maximum_Number_of_Ways(int Arr[], int N, int M) {
    vector<int> dp(M + 1);
    for (int i = 0; i <= M; i++) dp[i] = 0;
    dp[0] = 1;
    for (int i = 0; i < N; i++) {
        for (int j = Arr[i]; j <= M; j++) dp[j] = (dp[j] + dp[j - Arr[i]]) % 1000000007;
    }
    return dp[M];
}

int main() {
    int T;
    cin>>T;
    while (T--) {
        int N, M;
        cin>>N>>M;
        int Arr[N];

        for (int i = 0; i < N; i++) cin>>Arr[i];

        cout<<Maximum_Number_of_Ways(Arr, N, 1000 - M)<< endl;
    }

    return 0;
}