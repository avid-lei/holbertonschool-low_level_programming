#include "binary_trees.h"

/**
 * binary_tree_leaves - count leaves
 * @tree: binary_tree_t
 * Return: size_t
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leave_l, leave_r;

	if (!tree)
		return (0);
	else if (!tree->left && !tree->right)
		return (1);

	leave_l = binary_tree_leaves(tree->left);
	leave_r = binary_tree_leaves(tree->right);

	return (leave_l + leave_r);

}
