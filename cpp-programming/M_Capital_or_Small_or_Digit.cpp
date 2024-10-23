#include<bits/stdc++.h>
using namespace std;

int main () {
    char c;
    cin>>c;
    if (c >= 48 && c <= 57) cout<<"IS DIGIT";
    else if (c >= 65 && c <= 90) cout<<"ALPHA"<<endl<<"IS CAPITAL";
    else if (c >= 97 && c <= 122) cout<<"ALPHA"<<endl<<"IS SMALL";
    return 0;
}