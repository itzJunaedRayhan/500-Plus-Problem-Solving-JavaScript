#include<bits/stdc++.h>
using namespace std;

class Student {
    public:
    char name[100];
    int roll;
    char section;
    int whichClass;

    Student(const char * name, int roll, char section, int className) {
        strcpy(this->name, name);
        this->roll = roll;
        this->section = section;
        this->whichClass = className;
    }
};

Student fun () {
    char name[100] = "Junaed Islam";
    Student junaed (name, 36, 'B', 16);
    return junaed;
};

int main () {
    Student junaed = fun();

    //  For Junaed islam:
    cout<<"My Name : "<<junaed.name<<endl;
    cout<<"My Roll : "<<junaed.roll<<endl;
    cout<<"My Class : "<<junaed.whichClass<<endl;
    cout<<"My Section : "<<junaed.section<<endl<<endl;
    return 0;
}