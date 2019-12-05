#include "binary_trees.h"

/**
 * binary_tree_is_full - check full tree
 * @tree: binary_tree_t
 * Return: int
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
	int check_l, check_r;

	if (!tree)
		return (0);

	else if (!tree->right && !tree->left)
		return (1);

	else if (tree->right && tree->left)
	{
		check_l = binary_tree_is_full(tree->left);
		check_r = binary_tree_is_full(tree->right);

		if (!check_r || !check_l)
			return (0);
		else
			return (1);
	}
	else
	{
		return (0);
	}
}
