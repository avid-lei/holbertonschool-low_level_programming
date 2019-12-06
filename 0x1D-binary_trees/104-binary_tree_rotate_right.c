#include "binary_trees.h"

/**
 * binary_tree_rotate_right - rotate tree one node to the left
 * @tree: binary_tree_t
 * Return: binary_tree_t
 */

binary_tree_t *binary_tree_rotate_right(binary_tree_t *tree)
{

	if (!tree || !tree->left)
		return (NULL);

	tree->parent = tree->left;

	if (tree->left->right)
	{
		tree->left = tree->parent->right;
		tree->left->parent = tree;
	}
	else
		tree->left = NULL;

	tree->parent->right = tree;
	tree->parent->parent = NULL;
	return (tree->parent);


}
