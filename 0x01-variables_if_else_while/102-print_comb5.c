#include <stdio.h>

/**
* main - Entry point
*
* Return: Always 0 (Success)
*/

int main(void)
{

int pair1, pair2;

for (pair1 = 0; pair1 <= 99; pair1++)
{
	for (pair2 = pair1 + 1; pair2 <= 99; pair2++)
	{
		int num1 = (pair1 / 10) + 48;
		int num2 = (pair1 % 10) + 48;
		int num3 = (pair2 / 10) + 48;
		int num4 = (pair2 % 10) + 48;


		putchar(num1);
		putchar(num2);
		putchar(' ');
		putchar(num3);
		putchar(num4);

		if (!(num1 == '9') || !(num2 == '8') || !(num3 == '9') || !(num4 == '9'))
		{
			putchar(',');
			putchar(' ');
		}

	}
}
	putchar('\n');
	return (0);
}
