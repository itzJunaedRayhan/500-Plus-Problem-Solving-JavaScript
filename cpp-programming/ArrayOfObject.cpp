#include<bits/stdc++.h>
using namespace std;

class Student {
    public:
    string name;
    int roll;
    int marks;
};

int main () {
    Student arr[3];

    //  Get Object Input To The Array
    for (int i = 0; i < 3; i++) {
        getline(cin, arr[i].name);
        cin>>arr[i].roll>>arr[i].marks;
        cin.ignore();
    }

    //  Print The Array of Object:
    for (int i = 0; i < 3; i++) {
        cout<<arr[i].name<<" "<<arr[i].roll<<" "<<arr[i].marks<<endl;
    }

    /*
    Output:
    Junaed 29 95
    Ragnar 30 96
    Bjorn 35 97
    */

    return 0;
}