#include "holberton.h"

/**
* print_alphabet_x10 - prints alphabet 10 times lowercase
*
* Return: Always 0 (Success)
*/

void print_alphabet_x10(void)
{

char alpha;
int x;

for (x = 1; x <= 10; x++)
{
	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		_putchar(alpha);
	}

	_putchar('\n');
}

return;
}
