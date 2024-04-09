#include "binary_trees.h"

/**
 * binary_tree_uncle - Finds the uncle of binary tree.
 * @node: The binary tree
 *
 * Return: Pointer to the uncle node,
 *	NULL if fails.
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *temp;

	if (node == NULL || node->parent == NULL || node->parent->parent == NULL)
		return (NULL);
	temp = node->parent->parent;
	if (temp->left == node->parent)
		return (temp->right);
	return (temp->left);
}
