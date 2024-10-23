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

void insert_Nodes (Node* &head, Node* &tail, int val) {
    Node* newNode = new Node (val);
    if (head == NULL) {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    tail = newNode;
};

void reverse (Node* &head, Node* current) {
    if (current->next == NULL) {
        head = current;
        return;
    }
    reverse(head, current->next);
    current->next->next = current;
    current->next = NULL;
};

bool isPallindrome (Node* head, Node* head2) {
    Node* tmp = head;
    Node* tmp2 = head2;
    while (tmp != NULL) {
        if (tmp->val != tmp2->val) return false;
        
        tmp = tmp->next;
        tmp2 = tmp2->next;
    }
    return true;
};

int main () {
    Node* head = NULL;
    Node* tail = NULL;
    Node* head2 = NULL;
    Node* tail2 = NULL;

    int val;
    while (true) {
        cin>>val;
        if (val == -1) break;
        insert_Nodes(head, tail, val);
        insert_Nodes(head2, tail2, val);
    };

    reverse(head2, head2);

    if (isPallindrome(head, head2)) cout<<"YES";
    else cout<<"NO";

    return 0;
}