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

//  Inserted at given position:
void insert_at_position (Node* head, int pos, int value) {
    Node* NewNode = new Node(value);
    Node* tmp = head;
    for (int i = 1; i < pos; i++) {
        tmp = tmp->next;
        if (tmp == NULL) {
            cout<<endl<<"Invalid Index"<<endl<<endl;
            return;
        }
    }
    NewNode->next = tmp->next;
    tmp->next = NewNode;
    cout<<endl<<"Inserted at given position"<<endl<<endl;
}

//  Insert at head position:
void insert_at_head (Node* &head, int value) {
    Node* NewNode = new Node(value);
    NewNode->next = head;
    head = NewNode;
    cout<<endl<<"Inserted at head position"<<endl<<endl;
}

//  delete from given position except head position:
void delete_from_position (Node *head, int pos) {
    Node *tmp = head;
    for (int i = 1; i <= pos - 1; i++) {
        tmp = tmp->next;
        if (tmp == NULL) {
            cout<<endl<<"Invalid Index"<<endl<<endl;
            return;
        }
    }
    if (tmp->next == NULL) {
        cout<<endl<<"Invalid Index"<<endl<<endl;
        return;
    }
    Node *deleteNode = tmp->next;
    tmp->next = tmp->next->next;
    delete deleteNode;
    cout<<endl<<"Deleted Node from given Position."<<endl<<endl;
};

//  delete from head:
void delete_Head (Node* &head) {
    if (head == NULL) {
        cout<<endl<<"Head is not available"<<endl<<endl;
        return;
    }
    Node* deleteNode = head;
    head = head->next;
    delete deleteNode;
    cout<<endl<<"Deleted head position Node."<<endl<<endl;
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
        cout<<"Option 3: Insert at Head"<<endl;
        cout<<"Option 4: delete node from given position"<<endl;
        cout<<"Option 5: delete head position"<<endl;
        cout<<"Option 6: Print Nodes from Linked List"<<endl;
        cout<<"Option 7: Terminate"<<endl;

        int option;  
        cin>>option;

        if (option == 1) {
            cout<<"Enter a value : "<<endl;
            int v;
            cin>>v;
            insert_at_tail(head, v);

        } else if (option == 2) {
            int pos, value;
            cout<<"Enter a Position : "<<endl;
            cin>>pos;
            cout<<"Enter a value : "<<endl;
            cin>>value;
            if (pos == 0) insert_at_head(head, value);
            else insert_at_position(head, pos, value);

        } else if (option == 3) {
            int value;
            cout<<"Enter a value : "<<endl;
            cin>>value;
            insert_at_head(head, value);

        } else if (option == 4) {
            int pos;
            cout<<"Enter a position : "<<endl;
            cin>>pos;
            if (pos == 0) delete_Head(head);
            else delete_from_position(head, pos);

        } else if (option == 5) {
            delete_Head(head);

        } else if (option == 6) {
            print_linked_list(head);

        } else if (option == 7) {
            break;
        }
    }
    return 0;
}