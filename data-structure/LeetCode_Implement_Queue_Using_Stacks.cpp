#include<bits/stdc++.h>
using namespace std;

class MyQueue {
public:
    stack<int> st;
    MyQueue() {
        
    }
    
    void push(int x) {
        st.push(x);
    }
    
    int pop() {
        stack<int> newStack;
        int last; 
        while (!st.empty()) {
            int k = st.top();
            st.pop();
            if (st.empty()) {
                last = k;
                break;
            }
            newStack.push(k);
        }

        while (!newStack.empty()) {
            st.push(newStack.top());
            newStack.pop();
        }

        return last;
    }
    
    int peek() {
        stack<int> newStack;
        int last; 
        while (!st.empty()) {
            int k = st.top();
            st.pop();
            if (st.empty()) {
                last = k;
            }
            newStack.push(k);
        }

        while (!newStack.empty()) {
            st.push(newStack.top());
            newStack.pop();
        }
        return last;
    }
    
    bool empty() {
        return st.empty();
    }
};

int main () {
    
    return 0;
}