#include<bits/stdc++.h>
using namespace std;

int main () {
    string sentence;
    getline(cin, sentence);
    string word;
    stringstream ss(sentence);
    map <string, int> mp;

    while (ss >> word) {
        mp[word]++;
    };

    for (auto it = mp.begin(); it != mp.end(); ++it) {
        cout<<it->first<<" "<<it->second<<endl;
    };

    cout<<mp["She"]<<endl;

    /*
    Input: 
    I Love Cricket. He Loves Cricket. They Loves Cricket. I Love Footbal Also.

    Output:
    Also. 1
    Cricket. 3
    Footbal 1
    He 1
    I 2
    Love 2
    Loves 2
    They 1
    0
    */

    return 0;
}