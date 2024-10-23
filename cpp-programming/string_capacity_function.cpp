#include <bits/stdc++.h>
using namespace std;

int main() {
    string s = "Hello World";
    
    //  size();                 //  11
    cout<<s.size()<<endl;
    
    //  maz_size();
    cout<<s.max_size()<<endl;   //  4611686018427387903
    
    //  capacity();
    cout<<s.capacity()<<endl;   //  15
    
    //  if string size incrases then string capacity also increase:
    s = "Junaed Islam Rayhan";
    cout<<s.size()<<endl;       //  19
    cout<<s.capacity()<<endl;   //  30
    
    //  clear(); 
    string a = "Junaed";
    a.clear();
    
    //  empty();
    if (a.empty() == true) cout<<"Empty"<<endl;
    else cout<<"Not Empty"<<endl;
    
    
    //  resize()
    string str;
    cin>>str;           //  Hello_World
    str.resize(5);
    cout<<str<<endl;    //  Hello - only show 5 char:
    str.resize(8, 'X');
    cout<<str<<endl;    //  HelloXXX - after 5 char it will print 'X':  
    
    return 0;
}