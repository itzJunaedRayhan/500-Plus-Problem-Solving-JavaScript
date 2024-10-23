#include<bits/stdc++.h>
using namespace std;

int main () {
    int N;
    cin>>N;
    priority_queue<int, vector<int>, greater<int>> pq;
    for (int i = 0; i < N; i++) {
        int x;
        cin>>x;
        pq.push(x);
    }

    int Q;
    cin>>Q;
    for (int i = 0; i < Q; i++) {
        int queries;
        cin>>queries;
        if (queries == 0) {
            int value;
            cin>>value;
            pq.push(value);
            cout<<pq.top()<<endl;

        } else if (queries == 1) {
            if (pq.empty()) cout<<"Empty"<<endl;
            else cout<<pq.top()<<endl;

        } else if (queries == 2) {
            if (pq.empty()) cout<<"Empty"<<endl;
            else {
                pq.pop();
                if (pq.empty()) cout<<"Empty"<<endl;
                else cout<<pq.top()<<endl;
            }
        }
    }

    return 0;
}