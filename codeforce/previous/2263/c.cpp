#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = NULL;
        right = NULL;
    }
};

Node* LCA(Node* root, int a, int b) {
    while (root != NULL) {
        if (a < root->data && b < root->data)
            root = root->left;
        else if (a > root->data && b > root->data)
            root = root->right;
        else
            return root;
    }

    return NULL;
}

int main() {
    Node* root = new Node(20);

    root->left = new Node(10);
    root->right = new Node(30);

    root->left->left = new Node(5);
    root->left->right = new Node(15);

    root->right->left = new Node(25);
    root->right->right = new Node(35);

    Node* ans = LCA(root, 5, 15);

    cout << "LCA = " << ans->data;

    return 0;
}