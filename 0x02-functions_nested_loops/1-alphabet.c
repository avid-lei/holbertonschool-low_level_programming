#include <stdio.h>

/**
* main - Entry point
*
* Return: Always 0 (Success)
*/

void print_alphabet(void);

int main(void)
{
	print_alphabet();
	putchar('\n');

	return (0);

}

void print_alphabet(void)
{
char alpha;
	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		putchar(alpha);
	}
return;
}
