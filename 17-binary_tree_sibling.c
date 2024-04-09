#include "binary_trees.h"
/**
 *binary_tree_sibling - finds the sibling of a node
 *@node: is a pointer to the node to find the sibling
 *Return: sibling
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	binary_tree_t *temp;

	if (node == NULL || node->parent == NULL)
		return (NULL);
	temp = node->parent;
	if (temp->left == node)
		return (temp->right);
	return (temp->left);
}
