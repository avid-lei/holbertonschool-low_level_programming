#include "holberton.h"
#include <stdio.h>
/**
 *clear_bit - clear the value of a bit to 0
 *@n: unsigned long int*
 *@index: unsigned int
 *Return: int
 */

int clear_bit(unsigned long int *n, unsigned int index)
{

	unsigned long int mask;
	unsigned int count = 0;
	unsigned long int ncopy = *n;


	while (ncopy)
	{
	count++;
	ncopy = ncopy >> 1;
	}

	count--;

	if (index > count)
		return (-1);

	mask = 1 << index;

	*n = *n & ~mask;

	return (1);

}
