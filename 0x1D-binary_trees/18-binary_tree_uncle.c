#include "binary_trees.h"

/**
 * binary_tree_uncle - check for uncle of node
 * @node: binary_tree_t
 * Return: binary_tree_t
 */

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *t;

	if (!node || !node->parent || !node->parent->parent)
		return (NULL);

	t = node->parent;

	if (t != t->parent->right)
	{
		if (t->parent->right)
			return (t->parent->right);

		return (NULL);
	}
	else
	{
		if (t->parent->left)
			return (t->parent->left);

		return (NULL);
	}
}
