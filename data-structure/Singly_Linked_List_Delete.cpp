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

void delete_node (Node* head, int pos) {
    Node* tmp = head;
    for (int i = 0; i < pos-1; i++) {
        tmp = tmp->next;
    }
    Node* deleteNode = tmp->next;
    tmp->next = tmp->next->next;
    delete deleteNode;
}

void delete_head (Node* &head) {
    Node* deleteNode = head;
    head = head->next;
    delete deleteNode;
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

    int pos;
    cin>>pos;

    print_node_list(head);
    if (pos >= Size(head)) {
        cout<<"Invalid position"<<endl;
    } else if (pos == 0) {
        delete_head(head);
    } else {
        delete_node(head, pos);
    }
    print_node_list(head);

    return 0;
}