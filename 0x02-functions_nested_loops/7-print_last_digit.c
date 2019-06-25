#include "holberton.h"

/**
* print_last_digit - prints last digit of n
* @n: int
*
*Return: int
*/

int print_last_digit(int n)
{
int abs;
int lastdigit;
	if (n >= 0)
	{
		abs = n;
	}
	else if (n < 0)
	{
		n = n * (-1);
		abs = n;
	}

	lastdigit = abs % 10;
	_putchar (lastdigit + '0');
	return (lastdigit);
}
