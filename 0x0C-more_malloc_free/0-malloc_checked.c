#include "holberton.h"

/**
 * malloc_checked - allocates memory using malloc
 *@b: unsigned int
 *Return: void pointer
 */

void *malloc_checked(unsigned int b)
{
	void *ar;

	ar = malloc(b);

	if (ar == NULL)
	{
		free(ar);
		exit(98);
	}
return (ar);

}
