#include <bits/stdc++.h>
using namespace std;

int main() {
    string a = "Hello ";
    
    //  s.assign() -> assign string:
    a.assign("Junaed");
    cout<<a<<endl;              //  Junaed
    
    
    
    //  s.erase(start, delete count) -> erase characters from the string:
    a.erase(3);                 //  deleted all char from index:
    cout<<a<<endl;              //  Jun
    
    a.erase(1, 1);              //  erase(starting index, delete count)
    cout<<a<<endl;              //  Jn - u deleted
    
    
    
    //  s.replace(start, delete count, replace word) -> replace a portion of the string:
    string b = "Hello World";
    b.replace(6, 5, "Junaed");  //  b.replace(start, delete count, replace word)
    cout<<b<<endl;              //  Hello Junaed
    
    
    
    //  s.insert(start, insert word) -> insert a portion to a specific position:
    string c = "I am Rayhan";
    c.insert(5, "Junaed ");     //  s.insert(start, insert word)
    cout<<c<<endl;              //  I am Junaed Rayhan
    
    
    return 0;
}