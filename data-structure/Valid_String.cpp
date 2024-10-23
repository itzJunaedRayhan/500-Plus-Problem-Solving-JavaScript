#include<bits/stdc++.h>
using namespace std;

class myStack {
    public:
    list<char> stackList;

    void push (char value) {
        stackList.push_back(value);
    }

    void pop () {
        stackList.pop_back();
    }

    char top () {
        return stackList.back();
    }

    int size () {
        return stackList.size();
    }

    bool empty () {
        if (stackList.size() == 0) return true;
        else return false;
    }
};

int main () {
    int T;
    cin>>T;

    for (int i=0; i<T; i++) {
        myStack strStack;
        string S;
        cin>>S;

        for (char C : S) {
            if (strStack.empty()) strStack.push(C);
            else if (C == 'A' && strStack.top() == 'B') strStack.pop();
            else if (C == 'B' && strStack.top() == 'A') strStack.pop();
            else strStack.push(C);
        }
        if (strStack.empty()) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }

    return 0;
}