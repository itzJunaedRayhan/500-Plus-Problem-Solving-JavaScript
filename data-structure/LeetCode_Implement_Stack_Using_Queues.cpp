#include<bits/stdc++.h>
using namespace std;

class MyStack {
    public:
    queue<int> q; 
    MyStack() {

    }

    void push (int value) {
        q.push(value);
    }

    int pop () {
        queue<int> newQueue;
        int last; 
        while (!q.empty()) {
            int k = q.front();
            q.pop();
            if (q.empty()) {
                last = k;
                break;
            }
            newQueue.push(k);
        }
        q = newQueue;
        return last;
    };

    int top () {
        queue<int> newQueue;
        int last;
        while (!q.empty()) {
            int k = q.front();
            q.pop();
            if (q.empty()) last = k;
            newQueue.push(k);
        }
        q = newQueue;
        return last;
    }

    bool empty () {
        return q.empty();
    }
};

int main () {
    
    return 0;
}