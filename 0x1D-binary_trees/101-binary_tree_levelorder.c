#include "binary_trees.h"

/**
 * re_levelorder - recursive apply function to tree based on height
 * @tree: binary_tree_t
 * @func: function
 * @height: int
 * Return: Always 0
 */
void re_levelorder(const binary_tree_t *tree, void (*func)(int), int height)
{
	if (!tree)
		return;

	if (height == 0)
		func(tree->n);

	else
		re_levelorder(tree->left, func, height - 1);
		re_levelorder(tree->right, func, height - 1);


}

/**
 * re_levelheight - recursive function to find height
 * @tree: binary_tree_t
 * Return: int
 */

int re_levelheight(const binary_tree_t *tree)
{
	int r_height, l_height;

	if (!tree)
		return (0);

	r_height = 1 + re_levelheight(tree->right);
	l_height = 1 + re_levelheight(tree->left);

	if (r_height >= l_height)
		return (r_height);
	else
		return (l_height);

}

/**
 * binary_tree_levelorder - apply function to tree in level order
 * @tree: binary_tree_t
 * @func: function
 * Return: void
 */

void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
	int height, i;

	if (!tree || !func)
		return;

	height = re_levelheight(tree);

	for (i = 0; i < height; i++)
	{
		re_levelorder(tree, func, i);
	}

}


