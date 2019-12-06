#include "binary_trees.h"

/**
 * bst_search - search for value in bst
 * @tree: bst_t
 * @value: int
 * Return: bst_t
 */

bst_t *bst_search(const bst_t *tree, int value)
{
	bst_t *r, *l;

	if (!tree)
		return (NULL);

	if (tree->n == value)
		return ((bst_t *)tree);

	l = bst_search(tree->left, value);

	if (l)
		return (l);

	r = bst_search(tree->right, value);

	if (r)
		return (r);

	return (NULL);

}
