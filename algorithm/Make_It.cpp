#include <bits/stdc++.h>
using namespace std;

int main()
{
    const int N = 1e5 + 10;
    int dp[N];
    int T;
    cin >> T;

    for (int i = 0; i < N; i++) {
        dp[i] = 0;
    }
        
    dp[1] = 1;
    for (int i = 1; i < N; i++)
    {
        if (dp[i])
        {
            if (i + 3 < N) {
                dp[i + 3] = 1;
            }
                
            if (i * 2 < N) {
                dp[i * 2] = 1;
            }  
        }
    }

    while (T--)
    {
        int n;
        cin >> n;

        if (dp[n]) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        } 
    }

    return 0;
}