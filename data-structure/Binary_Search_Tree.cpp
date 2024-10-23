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

bool BinarySearchTree (Node* root, int x) {
    if (root == NULL) return false;
    if (root->val == x) return true;
    if (x < root->val) return BinarySearchTree(root->left, x);
    else return BinarySearchTree(root->right, x);
};

int main () {
    //  Input For BST: 10 5 15 2 6 12 16 -1 3 -1 -1 -1 -1 -1 -1 -1 -1
    Node* root = BinaryTreeInput();

    if (BinarySearchTree(root, 12)) cout<<"YES, Found"<<endl;
    else cout<<"NO, Not Found"<<endl;
    
    return 0;
}