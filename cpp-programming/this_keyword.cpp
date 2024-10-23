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
    
    void hello () {
        cout<<"Hello "<<this->name<<endl;
    }
};


int main() {
    Person junaed ("Junaed Islam", 24);
    junaed.hello();
    cout<<junaed.name<<endl;
    return 0;
}