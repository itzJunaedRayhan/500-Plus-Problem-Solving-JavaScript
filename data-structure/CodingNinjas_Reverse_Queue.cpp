#include<bits/stdc++.h>
using namespace std;

queue<int> reverseQueue (queue<int> q) {
    stack<int> s; 
    while (!q.empty()) {
        s.push(q.front());
        q.pop();
    }
    while (!s.empty()) {
        q.push(s.top());
        s.pop();
    }
    return q;
};