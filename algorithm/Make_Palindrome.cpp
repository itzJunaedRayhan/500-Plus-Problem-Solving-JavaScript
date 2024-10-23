#include <bits/stdc++.h>
using namespace std;

int MakePalindrome(string S) {
    int StringLength = S.length();
    vector<vector<int>> dp(StringLength, vector<int>(StringLength, 0));
    
    for (int l = 2; l <= StringLength; l++) {
        for (int i = 0; i <= StringLength - l; i++) {
            int j = i + l - 1;
            if (S[i] == S[j]) dp[i][j] = dp[i + 1][j - 1];
            else dp[i][j] = min(dp[i + 1][j], dp[i][j - 1]) + 1;
        }
    }
    
    return dp[0][StringLength - 1];
}

int main() {
    int T;
    cin>>T;
    
    while (T--) {
        string S;
        cin>>S;
        cout<<MakePalindrome(S)<<endl;
    }
    
    return 0;
}