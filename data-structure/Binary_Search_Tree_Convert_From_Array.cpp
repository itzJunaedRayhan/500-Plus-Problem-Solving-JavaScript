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

Node* ConvertBSTfromArray (int arr[], int n, int l, int r) {
    if (l > r) return NULL;
    int mid = (l + r) / 2;
    Node* root = new Node(arr[mid]);
    Node* leftRoot = ConvertBSTfromArray(arr, n, l, mid - 1);
    Node* rightRoot = ConvertBSTfromArray(arr, n, mid + 1, r);
    root->left = leftRoot;
    root->right = rightRoot;
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

int main () {
    /*  Input For Convert Array To Binary Search Tree: 
    6 
    2 5 8 12 15 18
    */

    int n;
    cin>>n;
    int arr[n];
    for (int i=0; i<n; i++) cin>>arr[i];

    Node* root = ConvertBSTfromArray(arr, n, 0, n-1);
    levelOrder_print(root);

    //  Output: 8 2 15 5 12 18 
    return 0;
}