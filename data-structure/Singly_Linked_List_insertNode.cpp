#include<bits/stdc++.h>
using namespace std;

class Node {
    public:
    int value;
    Node* next;

    Node (int value) {
        this->value = value;
        this->next = NULL;
    }
};

void print_node_list (Node* head) {
    Node* tmp = head;
    while(tmp != NULL) {
        cout<<tmp->value<<" ";
        tmp = tmp->next;
    }
    cout<<endl;
}

int Size(Node* head) {
    Node* tmp = head;
    int count = 0;
    while (tmp != NULL) {
        tmp = tmp->next;
        count++;
    }
    return count;
}

void insert_node (Node* head, Node* tail, int pos, int value) {
    Node* tmp = head;
    Node* newNode = new Node(value);
    for (int i = 1; i < pos; i++) {
        tmp = tmp->next;
    }
    newNode->next = tmp->next;
    tmp->next = newNode;
}

void insert_at_head (Node* &head, int value) {
    Node* newNode = new Node(value);
    newNode->next = head;
    head = newNode;
}

void insert_at_tail (Node* &head, Node * &tail, int value) {
    Node* newNode = new Node(value);
    if (head == NULL) {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    tail = newNode;
}

int main () {
    Node* head = new Node (10);
    Node* a = new Node (20);
    Node* b = new Node (30);
    Node* c = new Node (40);
    Node* d = new Node (50);
    Node* tail = d;

    head->next = a;
    a->next = b;
    b->next = c;
    c->next = d;

    int pos, value;
    cin>>pos>>value;

    if (pos > Size(head)) {
        cout<<"Invalid position"<<endl;
    } else if (pos == 0) {
        insert_at_head(head, value);
    } else if (pos == Size(head)) {
        insert_at_tail(head, tail, value);
    }else {
        insert_node(head, tail, pos, value);
    }
    print_node_list(head);
    cout<<"Tail : "<<tail->value<<endl;

    return 0;
}