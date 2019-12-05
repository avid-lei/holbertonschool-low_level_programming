#include "binary_trees.h"

/**
 * binary_tree_is_perfect - check if tree is perfect
 * @tree: binary_tree_t
 * Return: int
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int check_l, check_r;

	if (!tree)
		return (0);


	check_l = 1 + binary_tree_is_perfect(tree->left);
	check_r = 1 + binary_tree_is_perfect(tree->right);

	if (check_l != check_r)
		return (0);
	else
		return (1);


}
