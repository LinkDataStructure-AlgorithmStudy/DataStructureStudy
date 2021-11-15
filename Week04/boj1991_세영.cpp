#include<iostream>

using namespace std;



typedef struct TreeNode {
	char data;
	struct TreeNode* left, * right;
	
}TreeNode;

TreeNode* tree;


void preorder(TreeNode* t) {
    cout << t->data;
    if (t->left)
        preorder(t->left);
    if (t->right)
        preorder(t->right);

}
void inorder(TreeNode* t) {
    if (t->left)
        inorder(t->left);

    cout << t->data;

    if (t->right)
        inorder(t->right);
}
void postorder(TreeNode* t) {
    if (t->left)
        postorder(t->left);
    if (t->right)
        postorder(t->right);

    cout << t->data;
}


int main() {
   
    int n, nmb;
    char c1, c2, c3;

    cin >> n;
    tree = (TreeNode*)malloc(sizeof(TreeNode) * n);
    for (int i = 0; i < n; i++) {
        cin >> c1 >> c2 >> c3;
        nmb = c1 - 'A';
        tree[nmb].data = c1;

        if (c2 == '.')
        {
            tree[nmb].left = NULL;
        }
        else
        {
            tree[nmb].left = &tree[c2 - 'A'];

        }
        if (c3 == '.')
        {
            tree[nmb].right = NULL;
        }
        else {
            tree[nmb].right = &tree[c3 - 'A'];

        }


    }

    preorder(&tree[0]);
    cout << endl;
    inorder(&tree[0]);
    cout << endl;
    postorder(&tree[0]);


    free(tree);

}