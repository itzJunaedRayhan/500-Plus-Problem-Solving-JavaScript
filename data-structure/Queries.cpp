#include<bits/stdc++.h>
using namespace std;

class Node {
    public:
    int val;
    Node* next;

    Node (int val) {
        this->val = val;
        this->next = NULL;
    }
};

void insert_at_head (Node* &head, Node* &tail, int value) {
    Node* newNode = new Node(value);
    if (head == NULL) {
        head = newNode;
        tail = newNode;
    }
    newNode->next = head;
    head = newNode;
}

void insert_at_tail (Node* &head, Node* &tail, int value) {
    Node* newNode = new Node(value);
    if (head == NULL) {
        head = newNode;
        tail = newNode;
    }
    tail->next = newNode;
    tail = newNode;
}

int main () {
    Node* head = NULL;
    Node* tail = NULL;
    int T, option, value;
    cin>>T;

    for (int i = 0; i < T; i++) {
        cin>>option>>value;
        if (option == 0) {
            insert_at_head(head, tail, value);
        } else if (option == 1) {
            insert_at_tail(head, tail, value);
        }
        cout<<head->val<<" "<<tail->val<<endl;
    }

    return 0;
}