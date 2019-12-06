#include "binary_trees.h"

/**
 * binary_tree_balance - is tree balance
 * @tree: binary_tree_t
 * Return: int
 */
int re_balance(binary_tree_t *tree);
int binary_tree_balance(const binary_tree_t *tree)
{
	int height_l, height_r;

	if (!tree)
		return (0);

	height_r = re_balance(tree->right);
	height_l = re_balance(tree->left);

	return (height_l - height_r);

}

/**
 * re_balance - recursive to calculate height
 * @tree: binary_tree_t
 * Return: int
 */

int re_balance(binary_tree_t *tree)
{
	int l, r;

	if (!tree)
		return (0);

	l = 1 + re_balance(tree->left);
	r = 1 + re_balance(tree->right);

	if (l >= r)
		return (l);
	else
		return (r);

}
