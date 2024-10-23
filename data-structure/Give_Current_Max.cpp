#include<bits/stdc++.h>
using namespace std;

class Student {
    public:
    string Name;
    int Roll;
    int Marks;
    Student (string Name, int Roll, int Marks) {
        this->Marks = Marks;
        this->Roll = Roll;
        this->Name = Name;
    };
};

class cmp {
    public:
    bool operator()(Student a, Student b) {
        if (a.Marks < b.Marks) return true;
        else if (a.Marks > b.Marks) return false;
        else {
            if (a.Roll > b.Roll) return true;
            else return false;
        }
    };
};

int main () {
    int N;
    cin>>N;
    priority_queue<Student, vector<Student>, cmp> pq;
    
    for (int i=0; i<N; i++) {
        string Name;
        int Roll, Marks;
        cin>>Name>>Roll>>Marks;
        Student studentInfo (Name, Roll, Marks);
        pq.push(studentInfo);
    }

    int Q;
    cin>>Q;
    for (int i=0; i<Q; i++) {
        int queries;
        cin>>queries;

        if (queries == 0) {
            string Name;
            int Roll, Marks;
            cin>>Name>>Roll>>Marks;
            Student studentInfo (Name, Roll, Marks);
            pq.push(studentInfo);
            cout<<pq.top().Name<<" "<<pq.top().Roll<<" "<<pq.top().Marks<<endl;

        } else if (queries == 1) {
            if (pq.empty()) cout<<"Empty"<<endl;
            else cout<<pq.top().Name<<" "<<pq.top().Roll<<" "<<pq.top().Marks<<endl;

        } else if (queries == 2) {
            if (pq.empty()) cout<<"Empty"<<endl;
            else {
                pq.pop();
                if (pq.empty()) cout<<"Empty"<<endl;
                else cout<<pq.top().Name<<" "<<pq.top().Roll<<" "<<pq.top().Marks<<endl;
            }
        }
    }

    return 0;
}