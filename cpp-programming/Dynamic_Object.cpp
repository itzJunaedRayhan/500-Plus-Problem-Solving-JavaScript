#include<bits/stdc++.h>
using namespace std;

class Person {
    public:
    char name[100];
    float height;
    int age;

Person(const char * personName, float personHeight, int personAge) {
        strcpy(name, personName);
        height = personHeight;
        age = personAge;
    }
};

int main () {
    char personName[100] = "Junaed Islam";
    char personName2[100] = "Rayhan";
    Person* junaed = new Person(personName, 6.55, 24);
    Person* rayhan = new Person(personName2, 5.67, 26);

    if (junaed->age > rayhan->age) 
    cout<<junaed->name<<endl;
    else if (junaed->age < rayhan->age) 
    cout<<rayhan->name<<endl;
    else cout<<"Their Age are Equal"<<endl;
    
    return 0;
}