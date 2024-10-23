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

void insert_node (Node* &head, Node* &tail, int value) {
    Node* newNode = new Node(value);
    if (head == NULL) {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    tail = newNode;
};

void find_max_min_node (Node* head) {
    int maxNode = INT_MIN;
    int minNode = INT_MAX;
    Node* tmp = head;

    while (tmp->val != -1) {
        maxNode = max(maxNode, tmp->val);
        minNode = min(minNode, tmp->val);
        tmp = tmp->next;
    }
    cout<<maxNode<<" "<<minNode<<endl;
}

int main () {
    Node* head = NULL;
    Node* tail = NULL;
    int value;
    
    while (true) {
        cin>>value;
        insert_node(head, tail, value);
        if (value == -1) break;
    }

    find_max_min_node(head);
    return 0;
}