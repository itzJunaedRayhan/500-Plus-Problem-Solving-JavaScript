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

void InOrderTraversal (Node* root) {
    if (root == NULL) return;
    InOrderTraversal(root->left);
    cout<<root->val<<" ";
    InOrderTraversal(root->right);
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

    //  PostOrder Traversal:- Left -> Root -> Right:
    InOrderTraversal(root);

    //  Output: - 40 60 20 90 100 10 30 70 50 80 

    return 0;
}