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

int countMaxLevel (Node* root) {
    if (root == NULL) return 0;
    int l = countMaxLevel(root->left);
    int r = countMaxLevel(root->right);
    return max(l, r) + 1;
};

int main () {
    //  Input: 10 20 30 70 150 120 40 80 90 -1 -1 130 -1 60 50 -1 -1 100 -1 -1 140 -1 -1 -1 -1 -1 110 -1 -1 -1 -1
    Node* root = Binary_Tree_Input();

    cout<<"Maximum Level: "<<countMaxLevel(root)<<endl;
    //  Output: Maximum Level: 6

    return 0;
}