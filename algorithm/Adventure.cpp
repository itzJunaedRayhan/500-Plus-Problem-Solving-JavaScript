#include<bits/stdc++.h>
using namespace std;

const int N = 1e4 + 5;
int dp[N][N];
int knapsack (int n, int S, int value[], int weight[]) {
    if (n == 0 || S == 0) return 0;
    if (dp[n][S] != -1) return dp[n][S];
    
    if (value[n-1] <= S) {
        int choice1 = knapsack(n - 1, S - value[n - 1], value, weight) + weight[n - 1];
        int choice2 = knapsack(n - 1, S, value, weight);
        return dp[n][S]= max(choice1,choice2);
    } 
    else return dp[n][S] = knapsack(n - 1, S, value, weight);
}

int main() {
    int T;
    cin>>T;
    while (T--) {
        int n, S;
        cin>>n>>S;
        int weight[n], value[n];
        for(int i = 0; i < n; i++) cin>>weight[i];
        for(int i = 0; i < n; i++) cin>>value[i];
    
        for(int i = 0; i <= n; i++) {
            for(int j = 0; j <= S; j++) dp[i][j] = -1;
        }
        cout<<knapsack(n, S, weight, value)<<endl;   
    }

   return 0;
}