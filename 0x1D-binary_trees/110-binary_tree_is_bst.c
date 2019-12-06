#include "binary_trees.h"

/**
 * re_bst - recursion function to compare value against all parents
 * @parent: binary_tree_t
 * @child: binary_tree_t
 * @dir: binary_tree_t
 * Return: int
 */

int re_bst(const binary_tree_t *parent, const binary_tree_t *child,
			const binary_tree_t *dir)
{


	if (!parent)
		return (1);


	if (dir == parent->left && child->n >= parent->n)
		return (0);

	if (dir == parent->right && child->n <= parent->n)
		return (0);

	if (!re_bst(parent->parent, child, dir->parent))
		return (0);

	return (1);

}


/**
 * binary_tree_is_bst - check if valid binary search
 * @tree: binary_tree_t
 * Return: int
 */


int binary_tree_is_bst(const binary_tree_t *tree)
{
	int l, r;

	if (!tree)
		return (0);

	if (!tree->left || !tree->right)
		return (1);

	if (!re_bst(tree, tree->left, tree->left))
		return (0);

	if (!re_bst(tree, tree->right, tree->right))
		return (0);

	l = binary_tree_is_bst(tree->left);
	r = binary_tree_is_bst(tree->right);

	if (l == 0 || r == 0)
		return (0);

	return (1);

}
