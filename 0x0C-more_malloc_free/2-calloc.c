#include "holberton.h"
/**
 *_calloc - allocate memory with calloc
 *@nmemb:unsigned int
 *@size:unsigned int
 *Return: void *
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ar;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ar = calloc(nmemb, size);

	if (ar == NULL)
		return (NULL);

	return (ar);

}
