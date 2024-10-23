#include <bits/stdc++.h>
using namespace std;

int dp[1005];
int Minimum_Number_of_Marks(int Arr[], int N, int M) {
    for (int i = 1; i <= M; i++) {
        dp[i] = INT_MAX;
        for (int j = 0; j < N; j++) {
            if (Arr[j] <= i) {
                int sub_res = dp[i - Arr[j]];
                if (sub_res != INT_MAX && sub_res + 1 < dp[i]) dp[i] = sub_res + 1;
            }
        }
    }
    if (dp[M] == INT_MAX) return -1;
    else return dp[M];
}

int main() {
    int T;
    cin>>T;
    while (T--) {
        int N, M;
        cin>>N>>M;
        int Arr[N];

        for (int i = 0; i < N; i++) cin>>Arr[i];

        cout<<Minimum_Number_of_Marks(Arr, N, 1000 - M)<<endl;
    }

    return 0;
}