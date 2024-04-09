#include "binary_trees.h"

/**
 * binary_tree_inorder - Goes through a binary tree using inorder traversal.
 * @tree: The binary tree
 * @func: Pointer to a function to call for each node
 *
 * Return: void.
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	const binary_tree_t *temp;

	temp = tree;
	if (temp == NULL || func == NULL)
		return;
	binary_tree_inorder(temp->left, func);
	func(temp->n);
	binary_tree_inorder(temp->right, func);
}
