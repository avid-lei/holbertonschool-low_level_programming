#include "holberton.h"
/**
 *print_diagonal - print lines
 *@n:int
 *Return: always 0
 */

void print_diagonal(int n)
{
int times, x;

for (times = 1; times <= n; times++)
{
	for (x = 1 ; x <= times; x++)
	{	_putchar(' ');
}
	_putchar('\\');
	_putchar('\n');
}

if (n <= 0)
	_putchar('\n');
}
