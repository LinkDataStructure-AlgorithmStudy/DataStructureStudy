#include <iostream>

using namespace std;

// A = 65, .. Z = 90
typedef struct Node
{
    char data;
    Node *left_node;
    Node *right_node;
} Node;

Node *create_node(char alphabet)
{
    Node *nd = (Node *)malloc(sizeof(Node *));
    nd->data = alphabet;
    nd->left_node = NULL;
    nd->right_node = NULL;
    return nd;
}

Node *search_node(Node *root, char alphabet)
{
    if (root->data == alphabet)
        return root;
    if (root->left_node == NULL && root->right_node == NULL)
        return NULL;
    search_node(root->left_node, alphabet);
    search_node(root->right_node, alphabet);
}

void preorder(Node *root)
{
    if (root == NULL)
        return;
    cout << root->data;
    preorder(root->left_node);
    preorder(root->right_node);
}

void inorder(Node *root)
{
    if (root == NULL)
        return;
    preorder(root->left_node);
    cout << root->data;
    preorder(root->right_node);
}

void postorder(Node *root)
{
    if (root == NULL)
        return;
    preorder(root->left_node);
    preorder(root->right_node);
    cout << root->data;
}

int main()
{
    Node *root = NULL;
    int test_case;
    cin >> test_case;

    for (int i = 0; i < test_case; i++)
    {
        char node_name;
        char left;
        char right;
        Node *temp = NULL;
        scanf("%1c %1c %1c", node_name, left, right);
        // 첫 원소일 때
        if (root == NULL)
        {
            root = create_node(node_name);
            root->left_node = (left != '.') ? create_node(left) : NULL;
            root->right_node = (right != '.') ? create_node(right) : NULL;
        }
        // 이후 원소 일 때
        else
        {
            temp = search_node(root, node_name);
            temp->left_node = (left != '.') ? create_node(left) : NULL;
            temp->right_node = (right != '.') ? create_node(right) : NULL;
        }
    }

    preorder(root);
    cout << '\n';
    inorder(root);
    cout << '\n';
    postorder(root);
    cout << '\n';

    return 0;
}