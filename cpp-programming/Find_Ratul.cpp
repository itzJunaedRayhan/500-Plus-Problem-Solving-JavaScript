#include <bits/stdc++.h>
using namespace std;

int main() {
    string S;
    getline(cin, S);
    stringstream words(S);
    string word;
    
    int flag = 0;
    while (words >> word) {
        if (word == "Ratul") {
            flag = 1;
            break;
        }
    };

    if (flag == 1) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;    
    
    return 0;
}