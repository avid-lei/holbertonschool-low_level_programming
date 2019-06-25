#include "holberton.h"

/**
* main - Entry point
*
* Return: Always 0 (Success)
*/

int _abs(int n)
{ 
	if (n >= 0)
		_putchar(n);
	else 
	{
		n = n / (-1);
		_putchar(n);
	}

return (0);
}

