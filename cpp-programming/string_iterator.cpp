#include <bits/stdc++.h>
using namespace std;

int main() {
    string a = "Hello";
    
    //  s.begin() -> pointer to the first element:
    cout<<*a.begin()<<endl;             //  H
    
    //  s.end() -> pointer to the next element after the last element of the string.
    cout<<*(a.end()-1)<<endl;           //  o

    
    
    
    //  iterate a strings all char:
    string s;
    cin>>s;
    
    /*
    for (string::iterator it=s.begin(); it < s.end(); it++) {
        cout<<*it<<endl;
    }
    */
    
    //  instead of 'string::iterator' we can use 'auto' keyword:
    //  not all compiler support auto keyword:
    for (auto it=s.begin(); it < s.end(); it++) {
        cout<<*it<<endl;
    }
    
    return 0;
}