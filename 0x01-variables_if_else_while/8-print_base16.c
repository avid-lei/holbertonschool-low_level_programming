#include <stdio.h>

/**
* main - Entry point
*
* Return: Always 0 (Success)
*/

int main(void)
{

int x;
char alpha;

for (x = 0; x < 10; x++)
{

	int digit = 48 + x;

	putchar(digit);
}


for (alpha = 'a'; alpha <= 'f'; alpha++)
{
	putchar(alpha);
}


putchar('\n');

	return (0);
}
