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

void checkDuplicate (Node* head) {
    int flag = 0;
    Node* tmp = head;
    for (Node* i = head; i->next != NULL; i = i->next) {
        for (Node* j = i->next; j != NULL; j = j->next) {
            if (i->val == j->val) {
                flag = 1;
            }
        }
    }
    if (flag == 0) cout<<"NO";
    else cout<<"YES";
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
        insert_node(head, tail, value);
    }

    checkDuplicate(head);
    

    return 0;
}