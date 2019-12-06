#include "binary_trees.h"

/**
 * binary_tree_rotate_right - rotate tree one node to the left
 * @tree: binary_tree_t
 * Return: binary_tree_t
 */

binary_tree_t *binary_tree_rotate_right(binary_tree_t *tree)
{

	if (!tree || !tree->left)
		return (tree);
	tree->left = tree->left->right;
	tree->parent = tree->left;

	if (tree->left->right)
	{

		tree->left->parent = tree->left;
	}
	else
		tree->left = NULL;

	tree->parent->right = tree;
	tree->parent->parent = NULL;
	return (tree->parent);

}
