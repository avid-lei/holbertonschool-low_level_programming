#include "holberton.h"

/**
 * binary_to_uint - converts binary to unsigned int
 * @b: const char *
 * Return: unsigned int
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int counter = 0;
	unsigned int i;
	unsigned int dec = 0;
	unsigned int base = 1;

	if (!b)
		return (0);

	while (*b)
	{
	counter++;
	b++;
	}

	b--;

	for (i = 0; i < counter; i++, b--)
	{
		if (*b == '1')
			dec = dec + base;

		else if (*b != '0' && *b != '1')
			return (0);

		base = base * 2;
	}

	return (dec);


}
