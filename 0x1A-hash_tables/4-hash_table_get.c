#include "hash_tables.h"
#include <string.h>

/**
 * hash_table_get - retrieves a value associated with a key
 * @ht: hash_table_t
 * @key: const char
 * Return: char
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *temp;
	unsigned long int i;

	if (!ht)
		return (NULL);

	i = key_index((const unsigned char *)key, ht->size);
	temp = ht->array[i];

	if (!temp)
		return (NULL);

	while (strcmp(key, temp->key))
	{
		if (!temp)
			return (NULL);
		temp = temp->next;

	}
	return (temp->value);
}
