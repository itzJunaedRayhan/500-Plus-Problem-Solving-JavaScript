#include<iostream>
#include<algorithm>
using namespace std;

int main () {
    int a, b;
    cin>>a>>b;
    int mn = min(a, b);
    int mx = max(a, b);

    cout<<"Min - :"<<mn<<endl;
    cout<<"Max - :"<<mx<<endl;

    return 0;
}