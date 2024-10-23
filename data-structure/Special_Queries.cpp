#include<bits/stdc++.h>
using namespace std;

class myQueue {
    public:
    list<string> nameList;

    void push (string name) {
        nameList.push_back(name);
    };

    void pop () {
        nameList.pop_front();
    };

    string front () {
        return nameList.front();
    }

    bool empty () {
        return nameList.empty();
    }
};

int main () {
    myQueue nameOfQueue;
    int Q;
    cin>>Q;
    
    for (int i=0; i<Q; i++) {
        int X;
        cin>>X;

        if (X == 0) {
            string name;
            cin>>name;
            nameOfQueue.push(name);
        } else {
            if (nameOfQueue.empty()) {
                cout<<"Invalid"<<endl;
            } else {
                cout<<nameOfQueue.front()<<endl;
                nameOfQueue.pop();
            }
        }
    }
    return 0;
}