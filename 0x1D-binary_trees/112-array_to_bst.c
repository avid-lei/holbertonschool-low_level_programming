#include "binary_trees.h"

/**
 * array_to_bst - convert array to binary search tree
 * @array: int*
 * @size: size of array
 * Return: root node
 */

bst_t *array_to_bst(int *array, size_t size)
{
	bst_t *root = NULL;
	size_t i;

	if (!array)
		return (NULL);

	root = bst_insert(&root, array[0]);

	for (i = 0; i < size; i++)
	{
		bst_insert(&root, array[i]);
	}

	return (root);
}
