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

int main () {
    Node* head1 = NULL;
    Node* tail1 = NULL;
    Node* head2 = NULL;
    Node* tail2 = NULL;
    int value;
    
    while (true) {
        cin>>value;
        insert_node(head1, tail1, value);
        if (value == -1) break;
    }

    while (true) {
        cin>>value;
        insert_node(head2, tail2, value);
        if (value == -1) break;
    }

    int flag = 0;
    Node* j = head2;
    for (Node* i = head1; i != NULL; i = i->next) {
        if (i->val != j->val) {
            flag = 1;
            break;
        }
        j = j->next;
    }

    if (flag == 0) cout<<"YES";
    else cout<<"NO";


    return 0;
}