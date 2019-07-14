#include "holberton.h"

/**
 *_realloc - reallocates a memory block using malloc and free
 *@ptr:void
 *@old_size:unsigned int
 *@new_size:unsigned int
 * Return: void *
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *ar;

	if (new_size == old_size)
		return(ptr);

	if (ptr == NULL)
	{
		ar = malloc(new_size);
		return (ar);
	}
	if (new_size == 0 && ptr != '\0')
		return (NULL);

	if (new_size > old_size)
		p = malloc(new_size);







}
