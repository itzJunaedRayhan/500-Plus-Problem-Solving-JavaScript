#include<bits/stdc++.h>
using namespace std;

class Node {
    public:
    int val;
    Node* next;
    Node* prev;

    Node (int val) {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};

class myStack {
    public:
    Node* head = NULL;
    Node* tail = NULL;
    int sz = 0;

    void push (int value) {
        sz++;
        Node* newNode = new Node(value);
        if (head == NULL) {
            head = newNode;
            tail = newNode;
            return;
        }
        newNode->prev = tail;
        tail->next = newNode;
        tail = tail->next;
    }

    void pop () {
        sz--;
        Node* deleteNode = tail;
        tail = tail->prev;
        if (tail == NULL) head = NULL;
        else tail->next = NULL;
        delete deleteNode;
    }

    int top () {
        return tail->val;
    }

    bool empty () {
        if (sz == 0) return true;
        else return false;
    }
};

class myQueue {
    public:
    Node* head = NULL;
    Node* tail = NULL;
    int sz = 0;

    void push (int val) {
        Node* newNode = new Node (val);
        sz++;
        if (head == NULL) {
            head = newNode;
            tail = newNode;
            return;
        }
        tail->next = newNode;
        newNode->prev = tail;
        tail = tail->next;
    };

    void pop () {
        sz--;
        Node* deleteNode = head;
        head = head->next;
        if (head == NULL) {
            tail = NULL;
            delete deleteNode;
            return;
        }
        head->prev = NULL;
        delete deleteNode;
    }

    int front () {
        return head->val;
    }

    bool empty () {
        if (sz == 0) return true;
        else return false;
    }
};

int main () {
    myStack stk;
    myQueue Que;
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