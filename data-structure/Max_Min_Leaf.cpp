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

int FindMax (Node* root, int &mx) {
    if (root == NULL) return INT_MIN;
    if (root->left == NULL && root->right == NULL) {
        if (root->val > mx) mx = root->val;
    }
    FindMax(root->left, mx);
    FindMax(root->right, mx);
    return mx;
};

int FindMin (Node* root, int &mn) {
    if (root == NULL) return INT_MAX;
    if (root->left == NULL && root->right == NULL) {
        if (root->val < mn) mn = root->val;
    }
    FindMin(root->left, mn);
    FindMin(root->right, mn);
    return mn;
};

int main() {
    int mx = INT_MIN;
    int mn = INT_MAX;
    Node *root = BinaryTreeInput();
    cout<<FindMax(root, mx)<<" "<<FindMin(root, mn)<<endl;
    return 0;
}