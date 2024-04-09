#include "binary_trees.h"
/**
 *
 *
 *
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int left = 0, right = 0, measure;

	if (tree == NULL)
		return (0);

	while (tree->left != NULL)
	{
		left++;
		tree = tree->left;
	}

	while (tree->right != NULL)
	{
		right++;
		tree = tree->right;
	}

	measure = left - right;

	return (measure);
}
