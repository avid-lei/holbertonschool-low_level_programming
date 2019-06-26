#include "holberton.h"

/**
* times_table - prints times table up to 9
*
*Return: Always 0
*/

void times_table(int n)
{
int factor1, factor2, product, product1, product10;

for (factor1 = 0; factor1 <= n; factor1++)
{
	for (factor2 = 0; factor2 <= n; factor2++)
	{
		product = factor1 * factor2;

		if (product > n)
		{
			if (factor2 != 0)
			{
				_putchar(',');
				_putchar(' ');
			}

			product10 = product / 10;
			product1 = product % 10;
			_putchar(product10 + '0');
			_putchar(product1 + '0');

		}
		else
		{
			if (factor2 != 0)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
			}


			_putchar(product + '0');

		}
	}
	_putchar('\n');
}
}
