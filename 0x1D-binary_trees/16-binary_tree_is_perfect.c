#include "binary_trees.h"

/**
 * binary_tree_is_perfect - check if tree is perfect
 * @tree: binary_tree_t
 * Return: int
 */

int re_perfect(binary_tree_t *tree);
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int check_l, check_r;

	if (!tree)
		return (0);


	check_l = re_perfect(tree->left);
	check_r = re_perfect(tree->right);

	if (check_l != check_r)
		return (0);
	else
		return (1);


}

/**
 * re_perfect - find if tree is perfect
 * @tree : binary_tree_t
 * Return: int
 */
int re_perfect(binary_tree_t *tree)
{

	int r_height, l_height;

	if (!tree)
		return (0);

	l_height = 1 + re_perfect(tree->left);
	r_height = 1 + re_perfect(tree->right);


	return (l_height + r_height);
}

