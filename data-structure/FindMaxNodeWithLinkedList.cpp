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

void insert_node (Node* &head, Node* &tail, int val) {
    Node* NewNode = new Node(val);
    if (head == NULL) {
        head = NewNode;
        tail = NewNode;
        return;
    }
    tail->next = NewNode;
    tail = NewNode;
}

void print_Max_node (Node* head) {
    Node* tmp = head;
    int maxNum = INT_MIN;
    while (tmp != NULL) {
       maxNum = max(maxNum, tmp->val);
        tmp = tmp->next;
    }
    cout<<maxNum;
}

int main () {
    Node* head = NULL;
    Node* tail = NULL;
    int value;

    while (true) {
        cin>>value;
        if (value == -1) {
            break;
        }
        insert_node(head, tail, value);
    }
    print_Max_node(head);

    return 0;
}