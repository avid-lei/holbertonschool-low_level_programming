#include <stdio.h>
/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
int number1, number2, number3, number4;

for (number4 = '0'; number4 <= '9'; number4++)
{
	for (number3 = '0'; number3 <= '9'; number3++)
	{
		for (number2 = '0'; number2 <= '9'; number2++)
		{
			for (number1 = '0'; number1 <= '9'; number1++)
			{
				if (!(number2 < number4) && !(number1 < number3) &&
						!(number2 == number4 && number1 == number3))
				{
					putchar(number4);
					putchar(number3);
					putchar(' ');
					putchar(number2);
					putchar(number1);
					if (!(number4 == '9') || !(number3 == '8') ||
							!(number2 == '9') || !(number1 == '9'))
					{
						putchar(',');
						putchar(' ');
					}
				}
			}	}
	}}
	putchar('\n');
	return (0);
}
