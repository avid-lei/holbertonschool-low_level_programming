#include <stdio.h>
#include "hash_tables.h"

/**
 * hash_table_create- Create an empty hash table
 * @size: unsigned long int
 * Return: hash_table_t
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hash = malloc(sizeof(hash_table_t));
	unsigned long int i = 0;

	if (!hash)
		return (NULL);

	hash->array = malloc(sizeof(hash_node_t *) * size);

	if (!hash->array)
		return (NULL);

	hash->size = size;
	while (i < size)
	{
		hash->array[i] = NULL;
		i++;
	}
	return (hash);
}
