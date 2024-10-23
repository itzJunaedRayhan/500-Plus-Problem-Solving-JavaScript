#include<bits/stdc++.h>
using namespace std;

class Node {
    public:
    int val;
    Node* left;
    Node* right;
    Node (int val) {
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};

Node* Binary_Tree_Input () {
    int val;
    cin>>val;
    Node* root;
    if (val == -1) root = NULL;
    else root = new Node(val);

    queue<Node*> TreeQueue;
    if (root) TreeQueue.push(root);

    while (!TreeQueue.empty()) {
        Node* f = TreeQueue.front();
        TreeQueue.pop();
        int l,r;
        cin>>l>>r;
        Node* myLeft;
        Node* myRight;
        if (l == -1) myLeft = NULL;
        else myLeft = new Node(l);

        if (r == -1) myRight = NULL;
        else myRight = new Node(r);

        f->left = myLeft; 
        f->right = myRight;

        if (f->left) TreeQueue.push(f->left);
        if (f->right) TreeQueue.push(f->right);
    }
    return root;
};

void level_order (Node* root) {
    if (root == NULL) {
        cout<<"Empty Tree"<<endl;
    }
    queue<Node*> q;
    q.push(root);
    while (!q.empty()) {
        Node* f = q.front();
        q.pop();
        cout<<f->val<<" ";
        if (f->left) q.push(f->left);
        if (f->right) q.push(f->right);
    }
};

int main () {
    //  Input: 10 20 60 30 50 70 -1 -1 40 -1 -1 -1 -1 80 -1 -1 -1
    Node* root = Binary_Tree_Input();

    level_order(root);
    //  Output: 10 20 60 30 50 70 40 80 
    return 0;
}