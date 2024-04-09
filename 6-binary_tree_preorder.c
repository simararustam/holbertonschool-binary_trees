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
	if (tree == NULL || func == NULL)
		return;
	func(tree);
	while (tree)
	{
		binary_tree_preorder(tree->left);
		binary_tree_preorder(tree->right);
	}
}
