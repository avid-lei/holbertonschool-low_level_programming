#include "binary_trees.h"

/**
 * binary_tree_rotate_left - rotate tree one node to the left
 * @tree: binary_tree_t
 * Return: binary_tree_t
 */

binary_tree_t *binary_tree_rotate_left(binary_tree_t *tree)
{

	if (!tree || !tree->right)
		return (NULL);

	tree->parent = tree->right;

	if (tree->right->left)
	{
		tree->right = tree->parent->left;
		tree->right->parent = tree;
	}
	else
		tree->right = NULL;

	tree->parent->left = tree;
	tree->parent->parent = NULL;
	return (tree->parent);

}
