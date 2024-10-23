#include<iostream>
#include<iomanip>
using namespace std;

int main () {
    float a;
    cin>>a;     //  10.71789
    cout<<fixed<<setprecision(2)<<a;    //  10.72
    return 0;
}