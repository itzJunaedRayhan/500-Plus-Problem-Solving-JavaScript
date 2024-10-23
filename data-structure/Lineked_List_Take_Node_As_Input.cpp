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

//  insert at tail:
void insert_at_tail (Node* &head, int value) {
    Node* NewNode = new Node(value);
    if (head == NULL) {
        head = NewNode;
        return;
    }
    Node* tmp = head;
    while (tmp->next != NULL) {
        tmp = tmp->next;
    };
    tmp->next = NewNode;
};

//  print_linked_list:
void print_linked_list (Node* head) {
    cout<<endl<<"Your Linked List: ";
    Node* tmp = head;
    while (tmp != NULL) {
        cout<<tmp->val<<" ";
        tmp = tmp->next;
    }
    cout<<endl<<endl;
};

int main () {
    int value;
    Node* head = NULL;

    while (true) {
        cin>>value;
        if (value == -1) break;
        insert_at_tail(head, value);
    };
    print_linked_list(head);
    return 0;
}