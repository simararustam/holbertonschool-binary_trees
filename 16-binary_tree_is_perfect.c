#include "binary_trees.h"
/**
 *
 *
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t left, right;

	if (tree == NULL)
		return (0);

	left = binary_tree_height(tree->left);
	right = binary_tree_height(tree->right);

	if (left == right)
		return (1);
	else
		return (0);
}
/**
 *binary_tree_height - measures the height of binary tree
 *@tree: the root of tree
 *Return: size of left or right
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left = 0, right = 0;

	if (tree == NULL)
		return (0);

	left += binary_tree_height(tree->left);
	right += binary_tree_height(tree->right);
	if (left > right)
		return (left + 1);
	else
		return (right + 1);
}
