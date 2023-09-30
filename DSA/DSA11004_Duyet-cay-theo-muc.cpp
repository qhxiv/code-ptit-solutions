#include <bits/stdc++.h>
#define ll long long

using namespace std;

struct node {
    int data;
    node* left;
    node* right;
};

node* makeNode(int x) {
    node* n = new node;
    n->data = x;
    n->left = n->right = NULL;
    return n;
}

void levelOrder(node* root) {
    queue<node*> q;
    if (root==NULL) return;
    q.push(root);
    while (!q.empty()) {
        node* top = q.front();
        q.pop();
        cout << top->data << ' ';
        if (top->left!=NULL) q.push(top->left);
        if (top->right!=NULL) q.push(top->right);
    }
}

void makeRoot(node* &root, int x) {
    if (root==NULL) root = makeNode(x);
}

void insertLeft(node* &root, int val, int x) {
    if (root==NULL) return;
    if (root->data==val && root->left==NULL) {
        root->left = makeNode(x);
        return;
    }
    insertLeft(root->left, val, x);
    insertLeft(root->right, val, x);
}

void insertRight(node* &root, int val, int x) {
    if (root==NULL) return;
    if (root->data==val && root->right==NULL) {
        root->right = makeNode(x);
        return;
    }
    insertRight(root->left, val, x);
    insertRight(root->right, val, x);
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        node* root = NULL;
        int n; cin >> n;
        int tmp = n - 1, u, v;
        char x;
        while (n--) {
            cin >> u >> v >> x;
            if (n==tmp)  makeRoot(root, u);
            if (x=='L') insertLeft(root, u, v);
            else insertRight(root, u, v);
        }
        levelOrder(root);
        cout << endl;
    }
}