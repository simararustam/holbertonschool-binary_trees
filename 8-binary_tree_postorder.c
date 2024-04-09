#include "binary_trees.h"

/**
 * binary_tree_postorder - Goes through a binary tree with postorder traversal.
 * @tree: The binary tree
 * @func: Pointer to a function to call for each node
 *
 * Return: void.
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	const binary_tree_t *temp;

	temp = tree;
	if (temp == NULL || func == NULL)
		return;
	binary_tree_postorder(temp->left, func);
	binary_tree_postorder(temp->right, func);
	func(temp->n);
}
