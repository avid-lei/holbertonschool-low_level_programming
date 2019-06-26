#include <stdio.h>

/**
 * print_to_98 - print natural numbers to 98
 * @n: int
 * Description:Holberton
 */

void print_to_98(int n)
{
int x;
	if (n < 98)
	{
		for (x = n; x < 98; x++)
		{
			printf("%d, ", x);

		}

	}

	else
	{
		for (x = n; x > 98; x--)
		{
			printf("%d, ", x);

		}



	}

	printf("98\n");
}


