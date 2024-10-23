#include<bits/stdc++.h>
using namespace std;

class Student {
    public : 
    char name[100];
    long long int roll;
    int cls;
    char section;
};

int main () {
    Student rahim;
    rahim.roll = 202131061036;
    rahim.cls = 16;
    rahim.section = 'B';
    char nm[100] = "Rahim Uddin";
    strcpy(rahim.name, nm);

    //  Karim
    Student karim;
    char nm2[100] = "Karim Uddin";
    strcpy(karim.name, nm2);
    karim.roll = 202131061037;
    karim.cls  = 16;
    karim.section = 'B';

    cout<<karim.name; 

    return 0;
}