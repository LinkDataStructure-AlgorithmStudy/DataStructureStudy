#include <iostream>

using namespace std;

struct Node{
    int data;
    Node* left;
    Node* right;
};

Node* insert(Node* node, int value){
    if(node == NULL){
        node = (Node*)malloc(sizeof(Node*));
        node->data = value;
        node->left = NULL;
        node->right = NULL;
    }
    if(value < node->data)
        node->left = insert(node->left, value);
    else
        node->right = insert(node->right, value);
    return node;
}

void postorder(Node* root){
    if(root == NULL) return;
    postorder(root->left);
    postorder(root->right);
    cout << root->data << '\n';
}
int main(){
    Node* root;
    int input;
    
    while(1){
        if(input == EOF) break;
        root = insert(root, input);
    }

    postorder(root);
    return 0;
}