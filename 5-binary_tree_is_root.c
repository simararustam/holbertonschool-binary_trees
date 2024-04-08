#include "binary_trees.h"

/**
 * binary_tree_is_root - Checks the binary tree if it is root.
 * @node: Node to be checked
 *
 * Return: 1 if node is root,
 *	0 otherwise.
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);

	if (node->parent == NULL)
		return (1);
	return (0);
}
