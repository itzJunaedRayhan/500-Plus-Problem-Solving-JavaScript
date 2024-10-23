#include<bits/stdc++.h>
using namespace std;

class myStack {
    public:
    list<int> stackList;

    void push (int value) {
        stackList.push_back(value);
    }

    void pop () {
        stackList.pop_back();
    }

    int top () {
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
    myStack st;
    int n;
    cin>>n;

    for (int i = 0; i < n; i++) {
        int x;
        cin>>x;
        st.push(x);
    }

    while (!st.empty()) {
        cout<<st.top()<<endl;
        st.pop();
    }

    return 0;
}