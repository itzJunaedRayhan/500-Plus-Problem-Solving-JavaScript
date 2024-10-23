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

int Find_Size (Node* head) {
    Node* tmp = head;
    int count = 0;
    while (tmp != NULL) {
        count++;
        tmp = tmp->next;
    }
    return count;
}

int main () {
    Node* head = NULL;
    Node* tail = NULL;
    Node* head1 = NULL;
    Node* tail1 = NULL;
    int value;

    while (true) {
        cin>>value;
        if (value == -1) {
            break;
        }
        insert_node(head, tail, value);
    }

    while (true) {
        cin>>value;
        if (value == -1) {
            break;
        }
        insert_node(head1, tail1, value);
    }    
    
    
    int size = Find_Size(head);
    int size1 = Find_Size(head1);

    if (size == size1) cout<<"YES";
    else cout<<"NO";

    return 0;
}