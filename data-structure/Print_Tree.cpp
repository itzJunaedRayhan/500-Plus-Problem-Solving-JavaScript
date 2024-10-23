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

void pushNodeInStack (Node *root, stack<int> &st) {
    if (root == NULL) return;
    queue<Node*> q;
    q.push(root);

    while (!q.empty()) {
        Node* f = q.front();
        q.pop();
        st.push(f->val);
        if (f->right) q.push(f->right);
        if (f->left) q.push(f->left);
    }
};

int main() {
    stack<int> st;
    Node *root = BinaryTreeInput();
    pushNodeInStack(root, st);

    while (!st.empty()) {
        cout<<st.top()<<" ";
        st.pop();
    }
    return 0;
}