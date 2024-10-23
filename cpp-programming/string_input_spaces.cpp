#include <bits/stdc++.h>
using namespace std;

int main() {
    int x;
    cin>>x;
    
    //  cin.ignore() - ignore 1 char:
    cin.ignore();
    
    //  getchar() - ignore 1 char:
    //  getchar();
    
    //  If string with space, we will use getline:
    string s;
    getline(cin, s);
    cout<<s<<endl;
    
    return 0;
}