#include "binary_trees.h"

/**
 * binary_tree_size - size of tree
 * @tree:binary_tree_t
 * Return: size_t
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t size_l, size_r;

	if (!tree)
		return (0);

	size_l = 1 + binary_tree_size(tree->left);
	size_r = 1 + binary_tree_size(tree->right);

	return (size_l + size_r - 1);


}
