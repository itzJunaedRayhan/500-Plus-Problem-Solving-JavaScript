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

void PushNodesInQueue (Node *root, vector<int> &v, int x) {
    int level = 0;
    if (root == NULL) return;
    queue<pair<Node*, int>> q;
    q.push({root, level});

    while (!q.empty()) {
        pair<Node*, int> pr = q.front();
        q.pop();
        Node* p = pr.first;
        level = pr.second;

        if (x == level) v.push_back(p->val);
        if (p->left) q.push({p->left, level + 1});
        if (p->right) q.push({p->right, level + 1});
    }
};

int main() {
    Node* root = BinaryTreeInput();
    vector<int> v;
    int x;
    cin>>x;
    PushNodesInQueue(root, v, x);
    if (v.size()) {
        for (int value : v) cout<<value<<" ";
    } else cout<<"Invalid";
    
    return 0;
}