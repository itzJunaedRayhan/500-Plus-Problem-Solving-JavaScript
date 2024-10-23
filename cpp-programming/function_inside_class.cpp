#include <bits/stdc++.h>
using namespace std;

class Person {
    public:
    string name;
    int age;
    int marks1;
    int marks2;
    
    Person (string nm, int ag, int m1, int m2) {
        name = nm;
        age  = ag;
        marks1 = m1;
        marks2 = m2;
    }
    
    void hello () {
        cout<<name<<" "<<age<<endl;
    }
    
    int total_marks () {
        return marks1 + marks2;
    }
};


int main() {
    Person junaed ("Junaed Islam", 24, 95, 85);
    cout<<junaed.total_marks()<<endl;
    
    return 0;
}