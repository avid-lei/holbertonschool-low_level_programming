#include "binary_trees.h"


/**
 * re_node - recursive function to compare values in tree
 * @parent: binary_tree_t
 * @node: binary_tree_t
 * Return: bst_t
 */
bst_t *re_node(bst_t **parent, bst_t *node)
{
	if (node->n == (*parent)->n)
		return (NULL);

	if (node->n < (*parent)->n)
	{
		if ((*parent)->left)
			re_node(&((*parent)->left), node);
		else
		{
			(*parent)->left = node;
			node->parent = (*parent);
			return (node);
		}
	}
	else
	{
		if ((*parent)->right)
			re_node(&((*parent)->right), node);
		else
		{
			(*parent)->right = node;
			node->parent = (*parent);
			return (node);
		}
	}
	return (node);
}


/**
 * bst_insert - insert binary search tree node
 * @tree: binary_tree_t
 * @value:int
 * Return: bst_t
 */


bst_t *bst_insert(bst_t **tree, int value)
{
	bst_t *node = malloc(sizeof(binary_tree_t));

	if (!node)
		return (NULL);

	node->n = value;
	node->left = NULL;
	node->right = NULL;

	if (!(*tree))
	{
		*tree = node;
		node->parent = NULL;
		return (node);
	}

	if (!re_node(tree, node))
		return (NULL);

	return (node);

}


