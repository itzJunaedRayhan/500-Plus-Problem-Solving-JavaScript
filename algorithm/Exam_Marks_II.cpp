#include <bits/stdc++.h>
using namespace std;

int dp[1005][1005];
bool Unbounded_Knapsack(int Arr[], int N, int Marks) {
    if (N == 0) return Marks == 0;
    if (dp[N][Marks] != -1) return dp[N][Marks];

    if (Arr[N - 1] <= Marks) {
        dp[N][Marks] = Unbounded_Knapsack(Arr, N, Marks - Arr[N - 1]) || Unbounded_Knapsack(Arr, N - 1, Marks);
    } else {
        dp[N][Marks] = Unbounded_Knapsack(Arr, N - 1, Marks);
    }
    
    return dp[N][Marks];
}

int main() {
    int T;
    cin>>T;
    while (T--) {
        int N, M;
        cin>>N>>M;
        int Arr[N];

        for (int i = 0; i < N; i++) cin>>Arr[i];
        
        int Marks = 1000 - M; 
        for (int i = 0; i <= N; i++) {
            for (int j = 0; j <= Marks; j++) dp[i][j] = -1; 
        }
        
        if (Unbounded_Knapsack(Arr, N, Marks)) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }

    return 0;
}