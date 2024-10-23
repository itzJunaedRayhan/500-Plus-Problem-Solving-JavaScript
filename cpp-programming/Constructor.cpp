#include<bits/stdc++.h>
using namespace std;

class Student {
    public:
    char name[100];
    int roll;
    int cls;
    char section;
    
    Student (const char* n, int r, int c, char s) {
        cout<<"I am From Constructor Function"<<endl;
        strcpy(name, n);
        roll = r;
        cls = c;
        section = s;
    }
};

int main () {
    Student junaed ("Junaed Islam", 36, 16, 'B');

    Student karim ("Karim Ullah", 37, 16, 'B');

    //  For Junaed islam:
    cout<<"My Name : "<<junaed.name<<endl;
    cout<<"My Roll : "<<junaed.roll<<endl;
    cout<<"My Class : "<<junaed.cls<<endl;
    cout<<"My Section : "<<junaed.section<<endl<<endl;

    //  For Karim:
    cout<<"Name : "<<karim.name<<endl;
    cout<<"Roll : "<<karim.roll<<endl;
    cout<<"Class : "<<karim.cls<<endl;
    cout<<"Section : "<<karim.section<<endl;
    return 0;
}