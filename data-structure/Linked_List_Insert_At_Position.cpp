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

//  Inserted at tail:
void insert_at_tail (Node* &head, int value) {
    Node* NewNode = new Node(value);
    if (head == NULL) {
        head = NewNode;
        cout<<endl<<"Inserted at head"<<endl<<endl;
        return;
    }
    Node* tmp = head;
    while (tmp->next != NULL) {
        tmp = tmp->next;
    };
    tmp->next = NewNode;
    cout<<endl<<"Inserted at tail"<<endl<<endl;
};

//  Inserted at given position except head:
void insert_at_position (Node* head, int pos, int value) {
    Node* NewNode = new Node(value);
    Node* tmp = head;
    for (int i = 1; i < pos; i++) {
        tmp = tmp->next;
    }
    NewNode->next = tmp->next;
    tmp->next = NewNode;
    cout<<endl<<"Inserted at position"<<endl<<endl;
}

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
    Node* head = NULL;

    while (true) {
        cout<<"Option 1: Insert at Tail"<<endl;
        cout<<"Option 2: Insert at Any Position"<<endl;
        cout<<"Option 3: Print Linked List"<<endl;
        cout<<"Option 4: Terminate"<<endl;

        int option;
        cin>>option;

        if (option == 1) {
            cout<<endl<<"Please Enter Value : "<<endl;
            int value;
            cin>>value;
            insert_at_tail (head, value);

        } else if (option == 2) {
            int pos, v;
            cout<<"Enter Position : "<<endl;
            cin>>pos;
            cout<<"Enter Value : "<<endl;
            cin>>v;
            insert_at_position(head, pos, v);

        } else if (option == 3) {
            print_linked_list(head);

        } else if (option == 4) {
            break;
        }
    }


    return 0;
}