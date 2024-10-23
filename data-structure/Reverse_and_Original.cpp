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

void print_linked_list_reverse (Node* head) {
    Node* tmp = head;
    if (tmp == NULL) return;
    print_linked_list_reverse(tmp->next);
    cout<<tmp->val<<" ";
}

void print_linked_list (Node * head) {
    Node * tmp = head;
    while (tmp != NULL) {
        cout<<tmp->val<<" ";
        tmp = tmp->next;
    }
    cout<<endl;
};

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

    print_linked_list_reverse(head);
    cout<<endl;
    print_linked_list(head);

    return 0;
}