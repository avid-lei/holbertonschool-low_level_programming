#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
* main - Entry point
*
* Return: Always 0 (Success)
*/

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	printf("Last digit of %d", n);

	n = n % 10;

	printf(" is %d", n);

	if (n > 5)
	{
		printf("%s\n", " and is greater than 5");
	}

	else if (n == 0)
	{
		printf("%s\n", " and is 0");
	}

	else
	{
		printf("%s\n", " and is less than 6 and not 0");
	}
	return (0);

}
