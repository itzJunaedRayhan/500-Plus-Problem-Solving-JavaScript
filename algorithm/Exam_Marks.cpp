#include<bits/stdc++.h>
using namespace std;

int dp[1005][1005];
bool knapsack (int marks[], int N, int size) {
    if (N == 0) return size == 0;
    if (dp[N][size] != -1) return dp[N][size];
    if (marks[N - 1] <= size) dp[N][size] = knapsack(marks, N - 1, size - marks[N - 1]) || knapsack(marks, N - 1, size);
    else dp[N][size] = knapsack(marks, N - 1, size);
    return dp[N][size];
}

int main() {
    int T;
    cin>>T;
    while (T--) {
        int N, M;
        cin>>N>>M;
        int marks[N];
        for (int i = 0; i < N; i++) cin>>marks[i];
        int size = 1000 - M;
        for (int i = 0; i <= N; i++) {
            for (int j = 0; j <= size; j++) dp[i][j] = -1;
        }
        if (knapsack(marks, N, size)) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }

    return 0;
}