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
    int value;

    while (true) {
        cin>>value;
        if (value == -1) {
            break;
        }
        insert_node(head, tail, value);
    }
    
    
    int size = Find_Size(head);
    if (size % 2 != 0) {
        Node* tmp = head;
        int i = 0;
        while (i < size / 2) {
            tmp = tmp->next;
            i++;
        }
        cout<<tmp->val;
    } else if (size % 2 == 0) {
        Node* tmp = head;
        int i = 0;
        while (i < ((size / 2)-1)) {
            tmp = tmp->next;
            i++;
        }
        cout<<tmp->val<<" "<<tmp->next->val;
    }


    return 0;
}