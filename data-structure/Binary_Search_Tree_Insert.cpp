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

Node* BinaryTreeInput () {
    int val;
    cin>>val;
    Node* root;
    if (val == -1) root = NULL;
    else root = new Node(val);

    queue<Node*> q;
    if (root) q.push(root);

    while (!q.empty()) {
        Node* f = q.front();
        q.pop();
        int l, r;
        cin>>l>>r;
        Node* myLeft; 
        Node* myRight;
        if (l == -1) myLeft = NULL;
        else myLeft = new Node(l);

        if (r == -1) myRight = NULL;
        else myRight = new Node(r);

        f->left = myLeft; 
        f->right = myRight;
        if (f->left) q.push(f->left);
        if (f->right) q.push(f->right);
    }
    return root;
};

void levelOrder_print (Node* root) {
    if (root == NULL) {
        cout<<"root is NULL"<<endl;
        return;
    };
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

void BinarySearchTreeInsertNodes (Node* root, int x) {
    if (root == NULL) {
        root = new Node(x);
        return;
    }
    if (x < root->val) {
        if (root->left == NULL) root->left = new Node(x);
        else BinarySearchTreeInsertNodes(root->left, x);
    } else {
        if (root->right == NULL) root->right = new Node(x);
        else BinarySearchTreeInsertNodes(root->right, x);
    }
};

int main () {
    //  Input For BST: 20 10 30 -1 15 25 35 -1 -1 -1 -1 -1 -1 
    Node* root = BinaryTreeInput();

    BinarySearchTreeInsertNodes(root, 13);
    BinarySearchTreeInsertNodes(root, 32);
    BinarySearchTreeInsertNodes(root, 27);
    BinarySearchTreeInsertNodes(root, 22);
    levelOrder_print(root);

    //  Output: 20 10 30 15 25 35 13 22 27 32 
    
    return 0;
}