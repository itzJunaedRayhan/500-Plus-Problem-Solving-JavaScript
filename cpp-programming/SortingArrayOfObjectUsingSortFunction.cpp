#include<bits/stdc++.h>
using namespace std;

class Student {
    public:
    string name;
    int roll;
    int marks;
};

bool cmp (Student a, Student b) {
    if (a.roll < b.roll) return true;
    else return false;
};

int main () {
    Student arr[3];

    //  Get Object Input To The Array
    for (int i = 0; i < 3; i++) {
        getline(cin, arr[i].name);
        cin>>arr[i].roll>>arr[i].marks;
        cin.ignore();
    }

    //  Sorting Array of object Using Sort Function depend on roll:
    sort(arr, arr+3, cmp);

    //  Print Array After Swap:
    for (int i = 0; i < 3; i++) {
        cout<<arr[i].name<<" "<<arr[i].roll<<" "<<arr[i].marks<<endl;
    }

    return 0;
}