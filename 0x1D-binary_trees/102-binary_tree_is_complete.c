#include "binary_trees.h"


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




int re_complete(const binary_tree_t *tree, int i, int flag);
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


int re_complete(const binary_tree_t *tree, int i, int flag)
{
	int r, l;

	if (!tree)
		return (1);

	if (i == 1 && flag == 0)
	{
		if (!tree->left || !tree->right)
		{
			return (0);
		}

		return (1);
	}


	if (i == 1 && flag == 1)
	{
		if (tree->right && !tree->left)
			return (0);

		return (1);
	}


	l = re_complete(tree->left, i - 1, flag);

	if (l == 0)
		return (0);

	r = re_complete(tree->right, i - 1, flag);

	if (r == 0)
		return (0);

	else
		return (1);
}
