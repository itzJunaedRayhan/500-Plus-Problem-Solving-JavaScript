#include<bits/stdc++.h>
using namespace std;

class Node {
    public:
    string val;
    Node* next;
    Node* prev;

    Node (string val) {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};

void insert_Nodes (Node* &head, Node* &tail, string val) {
    Node* newNode = new Node (val);
    if (head == NULL) {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    newNode->prev = tail;
    tail = newNode;
};

int main () {
    Node* head = NULL;
    Node* tail = NULL;
    Node* temp = NULL;
    string str;
    while (true) {
        cin>>str;
        if (str == "end") break;
        insert_Nodes(head, tail, str);
    }

    int N; 
    cin>>N;
    for (int i = 0; i < N; i++) {
        string command;
        cin>>command;
        if (command == "visit") {
            string address;
            cin>>address;
            bool flg = false;
            for (Node* i = head; i != NULL; i = i->next) {
                if (i->val == address) {
                    flg = true;
                    temp = i;
                    break;
                }
            }
            if (flg) cout<<address<<endl;
            else cout<<"Not Available"<<endl; 

        } else if (command == "prev") {
            if (temp != NULL && temp->prev != NULL) {
                temp = temp->prev;
                cout<<temp->val<<endl;
            } else cout<<"Not Available"<<endl;

        } else if (command == "next") {
            if (temp != NULL && temp->next != NULL) {
                temp = temp->next;
                cout<<temp->val<<endl;
            } else cout<<"Not Available"<<endl;
        }
    }
    return 0;
}