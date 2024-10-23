#include <bits/stdc++.h>
using namespace std;

class Node {
    public:
    int val;
    Node *left;
    Node *right;

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

int MaxHeight (Node* root) {
    if (root == NULL) return 0;
    int l = MaxHeight(root->left);
    int r = MaxHeight(root->right);
    return max(l, r) + 1;
};

int TotalNodes (Node* root) {
    if (root == NULL) return 0;
    int l = TotalNodes(root->left);
    int r = TotalNodes(root->right);
    return l + r + 1;
};

int main() {
    Node* root = BinaryTreeInput();

    if (TotalNodes(root) == pow(2, MaxHeight(root)) - 1) cout<<"YES";
    else cout<<"NO";
    
    return 0;
}