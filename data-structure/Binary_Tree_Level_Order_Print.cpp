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

void LevelOrderTraversal (Node* root) {
    if (root == NULL) {
        cout<<"Empty Tree"<<endl;
        return;
    }
    queue<Node*> TreeQueue; 
    TreeQueue.push(root);
    while (!TreeQueue.empty()) {
        Node* f = TreeQueue.front();
        TreeQueue.pop();
        cout<<f->val<<" ";
        if (f->left) TreeQueue.push(f->left);
        if (f->right) TreeQueue.push(f->right);
    }
};

int main () {
    Node *root = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);
    Node *c = new Node(40);
    Node *d = new Node(50);
    Node *e = new Node(60);
    Node *f = new Node(70);
    Node *g = new Node(80);
    Node *h = new Node(90);
    Node *i = new Node(100);

    // Create Connection:
    root->left  = a;
    root->right = b;
    a->left  = c;
    a->right = h;
    c->right = e;
    b->right = d;
    d->left  = f;
    d->right = g;
    h->right = i;

    //  Level Order Traversal:- Level by Level
    LevelOrderTraversal(root);

    //  Output: - 10 20 30 40 90 50 60 100 70 80 

    return 0;
}