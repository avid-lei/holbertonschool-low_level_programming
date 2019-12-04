#include "binary_trees.h"

/**
 * binary_tree_node - create binary tree node
 * @parent: binary_tree_t
 * @value:int
 * Return: Always 0
 */



binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *node = malloc(sizeof(binary_tree_t));
	binary_tree_t *temp = parent;

	if (!node)
		return (NULL);

	node->n = value;
	node->left = NULL;
	node->right = NULL;

	if (!temp)
	{
		parent = node;
		node->parent = NULL;
		return (node);
	}
	else
	{
	    re_node(temp, node);
		return (node);
	}
}

/**
 * re_node - recursive function to compare values in tree
 * @t: binary_tree_t
 * @node: binary_tree_t
 * Return: Always 0
 */
void re_node(binary_tree_t *t, binary_tree_t *node)
{
	if (node->n < t->n)
	{
		if (t->left)
			re_node(t->left, node);
		else
		{
			t->left = node;
			node->parent = t;
			return;
		}
	}
	else
	{
		if (t->right)
			re_node(t->right, node);
		else
		{
			t->right = node;
			node->parent = t;
			return;
		}
	}
}
