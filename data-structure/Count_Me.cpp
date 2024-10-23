#include<bits/stdc++.h>
using namespace std;

int main () {
    int T;
    cin>>T;
    cin.ignore();

    for (int i = 0; i < T; i++) {
        string S;
        getline(cin, S);

        stringstream ss(S);
        map<string, int> mp;
        string word;
        int maxCount = 0;
        string maxWord;

        while (ss >> word) {
            mp[word]++;
            if (mp[word] > maxCount) {
                maxCount = mp[word];
                maxWord = word;
            }
        };
        cout<<maxWord<<" "<<maxCount<<endl;
    }

    return 0;
}