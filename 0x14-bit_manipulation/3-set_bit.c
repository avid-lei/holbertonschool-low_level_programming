#include "holberton.h"
#include <stdio.h>
/**
 *set_bit - set the value of a bit to 1
 *@n: unsigned long int*
 *@index: unsigned int
 *Return: int
 */

int set_bit(unsigned long int *n, unsigned int index)
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

	*n = *n | mask;

	return (1);

}
