#include "binary_trees.h"


/**
 * re_node - recursive function to compare values in tree
 * @t: binary_tree_t
 * @node: binary_tree_t
 * Return: Always 0
 */
void re_node(bst_t **parent, bst_t *node)
{

	if (node->n < (*parent)->n)
	{
		if ((*parent)->left)
			re_node(&((*parent)->left), node);
		else
		{
			(*parent)->left = node;
			node->parent = (*parent);
			return;
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
			return;
		}
	}
}


/**
 * binary_tree_node - create binary tree node
 * @parent: binary_tree_t
 * @value:int
 * Return: Always 0
 */


bst_t *bst_insert(bst_t **tree, int value)
{
	bst_t *node = malloc(sizeof(binary_tree_t));
	bst_t *parent = *tree;

	if (!node)
		return (NULL);

	node->n = value;
	node->left = NULL;
	node->right = NULL;

	if (!parent)
	{
		parent = node;
		node->parent = NULL;
		return (node);
	}

	re_node(tree, node);
	return (node);

}


