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
int number0;

for (number0 = '0'; number0 <= '7'; number0++)
{
	for (number1 = number0 + 1; number1 <= '9'; number1++)
	{

		for (number2 = number1 + 1; number2 <= '9'; number2++)
		{
		putchar(number0);
		putchar(number1);
		putchar(number2);
		if (number0 < '7' || number1 < '8' || number2 < '9')
		{
		putchar(',');
		putchar(' ');
		}
		}
	}
}
	putchar('\n');

	return (0);


}
