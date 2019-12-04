#include "binary_trees.h"

/**
 * binary_tree_insert_right - insert right node
 * @parent: binary_tree_t
 * @value: int
 * Return: binary_tree_t
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *node = malloc(sizeof(binary_tree_t));
	binary_tree_t *temp = parent;

	if (!node)
		return (NULL);

	if (!parent)
		return (NULL);

	node->n = value;
	node->left = NULL;

	re_right(temp, node);
	return (node);

}

/**
 * re_right - recursive solution
 * @t: binary_tree_t
 * @node: binary_tree_t
 * Return: Always 0
 */

void re_right(binary_tree_t *t, binary_tree_t *node)
{
	if (!(t->right))
	{
		node->parent = t;
		node->right = NULL;
		t->right = node;
		return;
	}
	else if (t->right->n > node->n)
	{
		node->parent = t;
		node->right = t->right;
		t->right->parent = node;
		t->right = node;
		return;
	}
	else
		re_right(t->right, node);
}
