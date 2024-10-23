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

    //  Sorting Array of object depend on Marks:
    for (int i = 0; i < 2; i++) {
        for (int j = i + 1; j < 3; j++) {
            if (arr[i].marks < arr[j].marks) swap(arr[i], arr[j]);
        }
    }

    //  Print Array After Swap:
    for (int i = 0; i < 3; i++) {
        cout<<arr[i].name<<" "<<arr[i].roll<<" "<<arr[i].marks<<endl;
    }

    return 0;
}