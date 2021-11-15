#include<stdio.h>
#include<stdlib.h>

typedef int element;
typedef struct TreeNode {
	element key;
	struct TreeNode* left, * right;

}TreeNode;

TreeNode* tree;
TreeNode* new_node(int item) {
	TreeNode* temp = (TreeNode*)malloc(sizeof(TreeNode));
	temp->key = item;
	temp->left = temp->right = NULL;
	return temp;
}
TreeNode* insert(TreeNode* node, int key) {
	if (node == NULL)
		return new_node(key);
	if (key < node->key)
		node->left = insert(node->left, key);
	else if (key > node->key)
		node->right = insert(node->right, key);

	return node;

}
void postorder(TreeNode* root) {
	if (root) {
		postorder(root->left);
		postorder(root->right);
		printf("%d\n", root->key);
	}
}
int main(void) {
	int n;
	TreeNode* root = NULL;
	TreeNode* tmp = NULL;

	while (1){
		scanf_s("%d", &n);
		if (n == -1)
			break;
		else
		{
			root = insert(root, n);
		}
		
	}

	printf_s("후위 순회 결과 \n");
	postorder(root);

}