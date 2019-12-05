#include "binary_trees.h"

/**
 * binary_tree_balance - is tree balance
 * @tree: binary_tree_t
 * Return: int
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	size_t height_l, height_r;

	if (!tree)
		return (0);

	height_r = re_height_r(tree);
	height_l = re_height_l(tree);
	return (height_l - height_r);

}

/**
 * re_height_l - calculate left height
 * @tree: binary_tree_t
 * Return: height
 */
int re_height_l(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	else
		return (1 + re_height_l(tree->left));
}

/**
 * re_height_r - calculate right height
 * @tree: binary_tree_t
 * Return: height
 */

int re_height_r(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	else
		return (1 + re_height_r(tree->right));
}
