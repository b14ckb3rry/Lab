// #include <bits/stdc++.h>
// using namespace std;
// class Node {
// public:
//     int val;
//     Node *left;
//     Node *right;
//     Node(int val) {
//         this->val = val;
//         this->left = NULL;
//         this->right = NULL;
//     }
// };
// void insert(Node *&root, int x) {
//     if (root == NULL) {
//         root = new Node(x);
//         return;
//     }
//     if (x < root->val) {
//         if (root->left == NULL) root->left = new Node(x);
//         else insert(root->left, x);
//     }
//     else {
//         if (root->right == NULL) root->right = new Node(x);
//         else insert(root->right, x);
//     }
// }
// void level_order(Node *root)
// {
//     if (root == NULL) {
//         cout << "Tree nai" << endl;
//         return;
//     }
//     queue<Node *> q;
//     q.push(root);
//     while (!q.empty()) {
//         // 1. ber kore ana
//         Node *f = q.front();
//         q.pop();

//         // 2. jabotiyo ja kaj ache
//         cout << f->val << " ";

//         // 3. tar children gulo ke rakha
//         if (f->left)
//             q.push(f->left);
//         if (f->right)
//             q.push(f->right);
//     }
// }
// int main() {
//     Node *root = NULL;
//     insert(root, 40);
//     insert(root, 30);
//     insert(root, 15);
//     insert(root, 50);
//     insert(root, 20);
//     insert(root, 44);
//     insert(root, 60);
//     insert(root, 78);
//     level_order(root);
// }







#include <bits/stdc++.h>
using namespace std;
class Node {
public:
    int val;
    Node *left;
    Node *right;
    Node(int val) {
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};
void insert(Node *&root, int x) {
    if (root == NULL) {
        root = new Node(x);
        return;
    }
    if (x < root->val) {
        if (root->left == NULL) root->left = new Node(x);
        else insert(root->left, x);
    }
    else {
        if (root->right == NULL) root->right = new Node(x);
        else insert(root->right, x);
    }
}
void inorder(Node *root) {
    if (root == NULL) {
        return;
    }
    inorder(root->left);
    cout << root->val << " ";
    inorder(root->right);
}
int main() {
    Node *root = NULL;
    insert(root, 40);
    insert(root, 30);
    insert(root, 15);
    insert(root, 50);
    insert(root, 20);
    insert(root, 44);
    insert(root, 60);
    insert(root, 78);
    inorder(root);
}