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

int Find_Size (Node* head) {
    Node* tmp = head;
    int count = 0;
    while (tmp != NULL) {
        count++;
        tmp = tmp->next;
    }
    return count;
}

void insert_head (Node* &head, Node* &tail, int value) {
    Node* newNode = new Node (value);
    if (head == NULL) {
        head = newNode;
        tail = newNode;
        return;
    }
    newNode->next = head;
    head->prev = newNode;
    head = newNode;
}

void insert_tail (Node* &head, Node* &tail, int value) {
    Node* newNode = new Node (value);
    if (head == NULL) {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    newNode->prev = tail;
    tail = tail->next;
}

void insert_at_positions (Node* head, int pos, int value) {
    Node* newNode = new Node (value);
    Node* tmp = head;
    for (int i = 1; i < pos; i++) {
        tmp = tmp->next;
    };
    newNode->next = tmp->next;
    tmp->next = newNode;
    newNode->next->prev = newNode;
    newNode->prev = tmp;
}

void print_normal (Node* head) {
    Node* tmp = head;
    while (tmp != NULL) {
        cout<<tmp->val<<" ";
        tmp = tmp->next;
    }
    cout<<endl;
}

void print_reverse (Node* tail) {
    Node* tmp = tail;
    while (tmp != NULL) {
        cout<<tmp->val<<" ";
        tmp = tmp->prev;
    }
    cout<<endl;
}

int main () {
    Node* head = new Node(10);
    Node* a = new Node(20);
    Node* b = new Node(30);
    Node* c = new Node(40);
    Node* tail = c;

    //  connection:
    head->next = a;
    a->prev = head;
    a->next = b;
    b->prev = a;
    b->next = c;
    c->prev = b;
    
    int pos, val;
    cin>>pos>>val;

    if (pos > Find_Size(head)) {
        cout<<"Invalid position"<<endl;

    } else if (pos == 0) {
        insert_head(head, tail, val);

    } else if (pos == Find_Size(head)) {
        insert_tail(head, tail, val);

    } else {
        insert_at_positions(head, pos, val);
    }
    print_normal(head);
    print_reverse(tail);

    return 0;
}