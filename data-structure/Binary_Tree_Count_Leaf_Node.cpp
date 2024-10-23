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

int countLeafNode (Node* root) {
    if (root == NULL) return 0;
    if (root->left == NULL && root->right == NULL) {
        return 1;
    } else {
        int l = countLeafNode(root->left);
        int r = countLeafNode(root->right);
        return l + r;
    }
};

int main () {
    //  Input: 10 20 50 30 40 70 60 -1 -1 -1 -1 -1 80 -1 -1 -1 -1
    Node* root = Binary_Tree_Input();

    cout<<countLeafNode(root)<<endl;
    //  Output: 4

    return 0;
}