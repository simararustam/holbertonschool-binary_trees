#include "binary_trees.h"
/**
 *binary_tree_depth -  measures the depth of a node in a binary tree
 *@tree:  is a pointer to the node to measure the depth
 *Return: depth
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	int i = 0;

	if (tree == NULL)
		return (0);

	while (tree->parent != NULL)
	{
		i++;
		tree = tree->parent;
	}
	return (i);
}
