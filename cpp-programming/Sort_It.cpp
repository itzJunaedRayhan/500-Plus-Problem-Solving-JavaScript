#include<bits/stdc++.h>
using namespace std;

class Student {
    public:
    string name;
    int cls;
    string section;
    int id;
    int math_marks;
    int eng_marks;
    int total_marks;
};

bool cmp (Student a, Student b) {
    if (a.total_marks == b.total_marks) {
        if (a.id > b.id) return true;
        else return false;
    } else if (a.total_marks < b.total_marks) return true;
    else return false;
};

int main () {
    int N;
    cin >> N;

    Student students[N];
    for (int i = 0; i < N; i++) {
        cin>>students[i].name>>students[i].cls>>students[i].section>>students[i].id>>students[i].math_marks>>students[i].eng_marks;
        students[i].total_marks = students[i].math_marks + students[i].eng_marks;
    }

    sort(students, students+N, cmp);

    for (int i = N-1; i >= 0; i--) {
        cout<<students[i].name<<" "<<students[i].cls<<" "<<students[i].section<<" "<<students[i].id<<" "<<students[i].math_marks<<" "<<students[i].eng_marks<<endl;
    }

    return 0;
}