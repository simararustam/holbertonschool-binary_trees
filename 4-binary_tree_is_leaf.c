#include "binary_trees.h"

/**
 * binary_tree_is_leaf - Checks the binary tree if it is leaf.
 * @node: Node to be checked
 *
 * Return: 1 if node is leaf,
 *	0 otherwise.
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);

	if (node->left == NULL && node->right == NULL)
		return (1);
	return (0);
}
