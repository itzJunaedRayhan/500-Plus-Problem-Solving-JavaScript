#include <bits/stdc++.h>
using namespace std;

int NumberOfCharacter(const string &DollOne, const string &DollTwo) {
    int LengthOne = DollOne.length();
    int LengthTwo = DollTwo.length();
    vector<vector<int>> dp(LengthOne + 1, vector<int>(LengthTwo + 1));
    
    for (int i = 0; i <= LengthOne; i++) {
        for (int j = 0; j <= LengthTwo; j++) dp[i][j] = 0;
    }

    for (int i = 0; i <= LengthOne; i++) {
        for (int j = 0; j <= LengthTwo; j++) {
            if (i == 0 || j == 0)  dp[i][j] = i + j;
            else if (DollOne[i - 1] == DollTwo[j - 1]) dp[i][j] = dp[i - 1][j - 1] + 1;
            else dp[i][j] = min(dp[i - 1][j], dp[i][j - 1]) + 1;
        }
    }
    
    return dp[LengthOne][LengthTwo];
}

int main() {
    int T;
    cin>>T;
    cin.ignore();  

    while (T--) {
        string DollNames;
        getline(cin, DollNames);

        int position = -1;
        for (int i = 0; i < DollNames.length(); i++) {
            if (DollNames[i] == ' ') {
                position = i;
                break;
            }
        }

        string DollOne, DollTwo;
        if (position != -1) {
            DollOne = DollNames.substr(0, position);
            DollTwo = DollNames.substr(position + 1);
        } else {
            DollOne = DollNames;
            DollTwo = "";
        }

        cout<<NumberOfCharacter(DollOne, DollTwo)<< endl;
    }

    return 0;
}