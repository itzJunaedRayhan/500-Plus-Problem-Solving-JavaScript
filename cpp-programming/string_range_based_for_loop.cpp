#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin>>s;
    
    //  If you need index numer use this syntax:
    for (int i = 0; i < s.size(); i++) {
        cout<<s[i]<<endl;
    }
    
    //  If you do not need index numer use this syntax:
    for (char c:s) {
        cout<<c<<endl;
    }
    
    return 0;
}