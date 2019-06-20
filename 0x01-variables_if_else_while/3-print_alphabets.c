#include <stdio.h>

/**
* main - Entry point
*
* Return: Always 0 (Success)
*/

int main(void)
{
char alpha;
char alphaU;

for (alpha = 'a'; alpha <= 'z'; alpha++)
	putchar(alpha);
for (alphaU = 'A'; alphaU <= 'Z'; alphaU++)
	putchar(alphaU);

	putchar('\n');

	return (0);
}
