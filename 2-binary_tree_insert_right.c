#include <stdio.h>
#include "binary_trees.h"
#include <stdlib.h>
/**
 *binary_tree_insert_right - inserts a node as the right-child of another node
 *@parent: is a pointer to the node to insert the right-child in
 *@value: is the value to store in the new node
 *Return: a pointer to the created node
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	if (parent == NULL || value == 0)
		return (NULL);

	new = malloc(sizeof(binary_tree_t));

	if (new == NULL)
		return (NULL);

	new->n = value;
	new->parent = parent;
	new->left = NULL;
	new->right = NULL;

	if (parent->right != NULL)
	{
		new->right = parent->right;
		new->right->parent = new;
	}
	parent->right = new;

	return (new);
}
