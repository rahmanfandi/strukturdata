#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;
    Node(int val) : data(val), left(nullptr), right(nullptr) {}
};

Node* insert(Node* root, int val) {
    if (!root) return new Node(val);
    if (val < root->data) root->left  = insert(root->left,  val);
    else if (val > root->data) root->right = insert(root->right, val);
    return root;
}

bool search(Node* root, int val) {
    if (!root) return false;
    if (root->data == val) return true;
    return val < root->data ? search(root->left, val) : search(root->right, val);
}

Node* deleteNode(Node* root, int val) {
    if (!root) return nullptr;
    if (val < root->data) root->left  = deleteNode(root->left,  val);
    else if (val > root->data) root->right = deleteNode(root->right, val);
    else {
        if (!root->left)  { Node* t = root->right; delete root; return t; }
        if (!root->right) { Node* t = root->left;  delete root; return t; }
        Node* s = root->right;
        while (s->left) s = s->left;
        root->data = s->data;
        root->right = deleteNode(root->right, s->data);
    }
    return root;
}

void inorder(Node* root) {
    if (!root) return;
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

void preorder(Node* root) {
    if (!root) return;
    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);
}

void postorder(Node* root) {
    if (!root) return;
    postorder(root->left);
    postorder(root->right);
    cout << root->data << " ";
}

int height(Node* root) {
    if (!root) return 0;
    return 1 + max(height(root->left), height(root->right));
}

int main() {
    Node* root = nullptr;
    for (int v : {50, 30, 70, 20, 40, 60, 80})
        root = insert(root, v);

    cout << "Inorder   : "; inorder(root);   cout << endl;
    cout << "Preorder  : "; preorder(root);  cout << endl;
    cout << "Postorder : "; postorder(root); cout << endl;
    cout << "Height    : " << height(root)  << endl;

    cout << "Search 40 : " << (search(root, 40) ? "ada" : "tidak ada") << endl;
    cout << "Search 55 : " << (search(root, 55) ? "ada" : "tidak ada") << endl;

    root = deleteNode(root, 30);
    cout << "Inorder setelah hapus 30: "; inorder(root); cout << endl;

    return 0;
}
