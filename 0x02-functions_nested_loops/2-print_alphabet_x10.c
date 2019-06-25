#include <stdio.h>

/**
* main - Entry point
*
* Return: Always 0 (Success)
*/

void print_alphabet_x10(void);

int main(void)
{
	print_alphabet_x10();
return (0);
}

void print_alphabet_x10(void)
{

char alpha;
int x;

for (x = 1; x <= 10; x++)
{
	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		putchar(alpha);
	}

	putchar('\n');
}

return;
}
