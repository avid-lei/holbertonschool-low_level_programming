#include "holberton.h"

/**
 * get_endianness - checks the endianness
 *
 * Return: 1 if little, 0 if big
 */

int get_endianness(void)
{
	unsigned int x = 0x1234;
	char *s = (char *)&x;

	if (*s == 0x34)
		return (1);
	else
		return (0);




}
