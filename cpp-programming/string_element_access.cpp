#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin>>s;             //  Hello
    
    //  S[i] -> access the ith index of the string:
    cout<<s[0]<<endl;            //  H
    cout<<s[s.size() - 1]<<endl; // o   
    
    //  s.at(i) -> access the ith index of the string:
    cout<<s.at(0)<<endl;        //  H
    
    //  s.back() -> access the last element of the string:
    cout<<s.back()<<endl;       //  o
    
    //  s.front() -> access the first element of the string:
    cout<<s.front()<<endl;      //  H
    
    return 0;
}