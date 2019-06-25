#include "holberton.h"

/**
* print_last_digit - prints last digit of n
* @n: int
*
*Return: int
*/

int print_last_digit(int n)
{
int lastdigit;

	lastdigit = n % 10;

	if (lastdigit >= 0)
	{
		_putchar (lastdigit + '0');
		return (lastdigit);

	}
	else if (lastdigit < 0)
	{
		lastdigit = lastdigit * (-1);
		_putchar (lastdigit + '0');
		return (lastdigit);
	}
return (0);
}
