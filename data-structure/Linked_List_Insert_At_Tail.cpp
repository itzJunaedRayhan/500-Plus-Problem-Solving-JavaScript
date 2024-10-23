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

void insert_at_tail (Node * &head, int v) {
    Node* NewNode = new Node(v);
    if (head == NULL) {
        head = NewNode;
        return;
    }
    Node* tmp = head;
    while (tmp->next != NULL) {
        tmp = tmp->next;
    }
    tmp->next = NewNode;
};

void print_linked_list (Node * head) {
    cout<<"You Linked List : "; 
    Node * tmp = head;
    while (tmp != NULL) {
        cout<<tmp->val<<" ";
        tmp = tmp->next;
    }
    cout<<endl;
};

int main () {
    Node * head = NULL;

    while (true) {
        cout<<"Option 1 : Insert at Tail"<<endl;
        cout<<"Option 2 : Print The Linked List:"<<endl; 
        cout<<"Option 3 : Terminate :"<<endl;
        int option;  
        cin>>option;

        if (option == 1) {
            cout<<"Please Enter a Value: "<<endl;
            int v; 
            cin>>v;
            insert_at_tail (head, v);

        } else if (option == 2) {
            print_linked_list(head);

        } else if (option == 3) {
            break;
        };
    }

    return 0;
}