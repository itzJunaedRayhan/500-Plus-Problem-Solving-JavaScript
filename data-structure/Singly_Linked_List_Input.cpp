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

void insert_node_tail (Node* &head, Node* &tail, int value) {
    Node* new_node = new Node(value);
    if (head == NULL) {
        head = new_node;
        tail = new_node;
        return;
    }
    tail->next = new_node;
    tail = new_node;
}

void print_node_list (Node* head) {
    Node* tmp = head;
    while(tmp != NULL) {
        cout<<tmp->val<<" ";
        tmp = tmp->next;
    }
    cout<<endl;
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
        insert_node_tail (head, tail, value);
    }
    print_node_list(head);

    return 0;
}