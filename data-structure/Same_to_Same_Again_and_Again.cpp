#include<bits/stdc++.h>
using namespace std;

int main () {
    stack<int> stk;
    queue<int> Que;
    int N, M;
    cin>>N>>M;
    list<int> listForStack;
    list<int> listForQueue;

    for (int i=0; i<N; i++) {
        int A;
        cin>>A;
        stk.push(A);
    }
    while (!stk.empty()) {
        listForStack.push_back(stk.top());
        stk.pop();
    }

    for (int i=0; i<M; i++) {
        int B;
        cin>>B;
        Que.push(B);
    }
    while (!Que.empty()) {
        listForQueue.push_back(Que.front());
        Que.pop();
    }


    bool temp = true;
    if (listForStack.size() != listForQueue.size()) {
        temp = false;
    } else {
        auto listItems = listForQueue.begin();
        for (int num : listForStack) {
            if (num != *listItems) {
                temp = false;
                break;
            }
            listItems++;
        }
    }
    if (temp) cout<<"YES";
    else cout<<"NO";

    return 0;
}