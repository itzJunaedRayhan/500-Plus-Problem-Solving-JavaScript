#include <bits/stdc++.h>
using namespace std;

int main() {
    string a = "Hello ";
    string b = "World ";
    string c = "Junaed";
    
    //  s+= -> append another string:
    a = a + b;
    cout<<a<<endl;      //  a = Hello World
    
    //  s.append() -> append another string:
    a.append(c);
    cout<<a<<endl;      //  a = Hello World Junaed
    
    //  s.push_back() -> add character to the last of the string:
    a.push_back('R');
    cout<<a<<endl;      //  Hello World JunaedR
    
    //  s.pop_back() -> remove the last character of the string:
    a.pop_back();       //  removed - R
    a.pop_back();       //  removed - d
    cout<<a<<endl;      //  Hello World Junaed
    
    return 0;
}