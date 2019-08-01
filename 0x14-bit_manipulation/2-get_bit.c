#include "holberton.h"

/**
 * get_bit - returns the value of a bit at a given index
 * @n:unsigned long int
 * @index: unsigned int
 * Return: int
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int count = 0;
	unsigned int icopy = n;
	unsigned int i;

	while (icopy)
	{
		count++;
		icopy = icopy >> 1;

	}


	for (i = 0; i < count; i++)
	{

		if (i == index)
		{
			if (n & 1)
				return (1);

			else
				return (0);
		}
		n = n >> 1;
	}
	return (-1);

}
