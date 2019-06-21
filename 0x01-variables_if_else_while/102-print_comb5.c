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
int number3;

for (number3 = '0'; number3 <= '9'; number3++)
{
	for (number0 = '0'; number0 <= '9'; number0++)
	{
		for (number1 = number3; number1 <= '9'; number1++)
		{

			for (number2 = number0 + 1; number2 <= '9'; number2++)
			{
			putchar(number3);
			putchar(number0);
			putchar(' ');
			putchar(number1);
			putchar(number2);

				if (number3 < '9' || number0 < '8' || number1 < '9' || number2 < '9')
				{
				putchar(',');
				putchar(' ');
				}
			}
		}
	}
}
	putchar('\n');

	return (0);


}
