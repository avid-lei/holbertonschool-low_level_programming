#include <stdio.h>
/**
* main - Entry point
*
* Return: Always 0 (Success)
*/

int main(void)
{
int x;
int sum = 0;

for (x = 1; x <= 1024; x++)
{
	if (x % 3 == 0 || x % 5 == 0)
	{
		sum = sum + x;

	}
}

	printf("%d\n", sum);
return (0);
}
