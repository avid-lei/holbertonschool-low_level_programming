#include "binary_trees.h"

/**
 * binary_tree_postorder - post order traversal
 * @tree: binary_tree_T
 * @func: function pointer
 * Return: always 0
 */

void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;

		binary_tree_postorder(tree->left, func);
		binary_tree_postorder(tree->right, func);
		func(tree->n);

}
