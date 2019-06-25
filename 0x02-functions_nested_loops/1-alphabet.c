#include "holberton.h"

/**
* print alphabet - Entry point
*
* Return: Always 0 (Success)
*/


void print_alphabet(void)
{
char alpha;
	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		_putchar(alpha);
	}

	_putchar('\n');
return;
}
