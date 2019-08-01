#include "holberton.h"

/**
 * flip_bits - returns number of bits you would need to flip
 * @n: unsigned long int
 * @m: insigned long int
 * Return: unsigned int
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{

	unsigned long int xor = m ^ n;
	unsigned int counter = 0;

	if (m == n)
		return (0);
	while (xor)
	{
		if (xor & 1)
			counter++;
		xor = xor >> 1;
	}

	return (counter);
}
