#include "binary_trees.h"

/**
 * binary_tree_preorder - Goes through a binary tree using pre-order traversal.
 * @tree: The binary tree
 * @func: Pointer to a function to call for each node
 *
 * Return: void.
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	binary_tree_t *temp;

	temp = *tree;
	if (temp == NULL || func == NULL)
		return;
	func(temp);
	while (temp)
	{
		binary_tree_preorder(temp->left, func);
		binary_tree_preorder(temp->right, func);
	}
}
