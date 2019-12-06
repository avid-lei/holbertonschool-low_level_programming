#include "binary_trees.h"

/**
 * re_levelheight - find height of tree
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
 * re_complete - recursive function to find completeness by height and flag
 * @tree: binary_tree_t
 * @i: int
 * @flag: int
 * Return: int
 */

int re_complete(const binary_tree_t *tree, int i, int flag)
{
	int r, l;

	if (!tree)
		return (1);
	if (i == 1 && flag == 0)
	{
		if (!tree->left || !tree->right)
			return (0);

		return (1);
	}
	if (flag == 2 && i == 1)
	{
		if ((tree->right || tree->left))
			return (0);

		return (2);
	}
	if (i == 1 && flag == 1)
	{
		if (!tree->right)
		{
			flag = 2;
			return (2);
		}
		if (tree->right && !tree->left)
			return (0);
	}
	l = re_complete(tree->left, i - 1, flag);
	if (l == 0)
		return (0);
	if (l == 2)
		flag = 2;
	r = re_complete(tree->right, i - 1, flag);
	if (r == 0)
		return (0);
	if (r == 2)
		return (2);
	return (1);
}

/**
 * binary_tree_is_complete - find if tree is complete
 * @tree: binary_tree_t
 * Return: int
 */

int binary_tree_is_complete(const binary_tree_t *tree)
{
	int i, j, flag = 0;
	int height;

	height = re_levelheight(tree);

	if (!tree)
		return (0);

	for (i = 1; i < height; i++)
	{
		if (i == height - 1)
			flag = 1;

		j = re_complete(tree, i, flag);
		if (j == 0)
			return (0);

	}

	return (1);
}

