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

    //  Get maximum object depend on Marks:
    Student mx;
    mx.marks = INT_MIN;
    for (int i = 0; i < 3; i++) {
        if (arr[i].marks > mx.marks) mx=arr[i];
    }
    cout<<mx.name<<" "<<mx.roll<<" "<<mx.marks<<endl;


    //  Get minimum object depend on Marks:
    Student mn;
    mn.marks = INT_MAX;
    for (int i = 0; i < 3; i++) {
        if (arr[i].marks < mn.marks) mn = arr[i];
    }
    cout<<mn.name<<" "<<mn.roll<<" "<<mn.marks<<endl;


    return 0;
}