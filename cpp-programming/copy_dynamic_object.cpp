#include <bits/stdc++.h>
using namespace std;

class Person {
    public:
    string name;
    int age;
    
    Person (string name, int age) {
        this->name = name;
        this->age  = age;
    }
};


int main() {
    Person* junaed = new Person ("Junaed", 24);
    Person* ragnar = new Person ("Ragnar", 25);
    
    *junaed = *ragnar;
    delete ragnar;
    
    cout<<junaed->name<<" "<<junaed->age<<endl;
    return 0;
}