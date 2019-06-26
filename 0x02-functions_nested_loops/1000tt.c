#include "holberton.h"
/**
* print_times_table - prints times table up to 9
*@n: int
*Return: Always 0
*/
void print_times_table(int n)
{
int factor1, factor2, product, product1, product10, product100;
if (!(n > 15 || n < 0))
{
for (factor1 = 0; factor1 <= n; factor1++)
{
	for (factor2 = 0; factor2 <= n; factor2++)
	{
	product = factor1 * factor2;
		if (product >= 100)
		{
			_putchar(',');
			_putchar(' ');

		} else if (product >= 10)
		{
			_putchar(',');
			_putchar(' ');
			_putchar(' ');
		} else
		{
			if (factor2 != 0)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(' ');
	}
		}

		product100 = product / 100;
		product10 = (product / 10) % 10;
		product1 = product % 10;

		if (product100 != 0)
		{
			_putchar(product100 + 48);
		}
		if (product100 != 0 || product10 != 0)
		{
			_putchar(product10 + '0');
		}
			_putchar(product1 + '0');
	} _putchar('\n');
}
}
}
