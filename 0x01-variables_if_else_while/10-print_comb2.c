#include <stdio.h>

/**
* main - Entry point
*
* Return: Always 0 (Success)
*/

int main(void)
{
int number1;
int number2;
for (number1 = '0'; number1 <= '9'; number1++)
{
	for (number2 = '0'; number2 <= '9'; number2++)
	{
	putchar(number1);
	putchar(number2);
	if (number1 < '9' || number2 < '9')
	{
		putchar(',');
		putchar(' ');
	}
	}
	}
	putchar('\n');

	return (0);


}
