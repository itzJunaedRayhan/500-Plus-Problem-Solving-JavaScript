#include <bits/stdc++.h>
using namespace std;

int main() {
    string a = "Junaed Islam";
    cout<<a<<endl;                  //  Junaed Islam    
    
    string b ("Junaed Islam");
    cout<<b<<endl;                  //  Junaed Islam
    
    string c ("Junaed Islam", 6);
    cout<<c<<endl;                  //  Junaed
    
    string d(15, 'J');
    cout<<d<<endl;                  //  JJJJJJJJJJJJJJJ
    
    return 0;
}