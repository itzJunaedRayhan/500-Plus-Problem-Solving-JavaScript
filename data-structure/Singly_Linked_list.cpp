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

int main () {
    Node* head = new Node (10);
    Node* a = new Node (20);
    Node* b = new Node (30);
    Node* c = new Node (40);
    Node* d = new Node (50);

    head->next = a;
    a->next = b;
    b->next = c;
    c->next = d;

    print_node_list(head);

    return 0;
}