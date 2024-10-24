#include<bits/stdc++.h>
using namespace std;

class Student {
    public:
    string name;
    int roll;
    int marks;
    Student (string name, int roll, int marks) {
        this->marks = marks;
        this->roll = roll;
        this->name = name;
    };
};

class cmp {
    public:
    bool operator()(Student a, Student b) {
        if (a.marks > b.marks) return true;
        else if (a.marks < b.marks) return false;
        else {
            if (a.roll > b.roll) return true;
            else return false;
        }
    }
};

int main () {
    int n;
    cin>>n;
    priority_queue<Student, vector<Student>, cmp> pq;

    for (int i = 0; i < n; i++) {
        string name;
        int roll, marks;
        cin>>name>>roll>>marks;
        Student obj (name, roll, marks);
        pq.push(obj);
    };

    while (!pq.empty()) {
        cout<<pq.top().name<<" "<<pq.top().roll<<" "<<pq.top().marks<<endl;
        pq.pop();
    }

    /*
    Input:
    5
    Rahim 25 85
    Shanto 36 99
    Tamim 9 85
    Sakib 23 95
    Mushfiq 30 89


    Output:
    Tamim 9 85
    Rahim 25 85
    Mushfiq 30 89
    Sakib 23 95
    Shanto 36 99
    */

    return 0;
}