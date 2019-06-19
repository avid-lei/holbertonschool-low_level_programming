#include <stdio.h>

/**
* main - Entry point
*
* Return: Always 0 (Success)
*/

int main(void)
{
	char sChar;
	int sInt;
	long int sLongInt;
	long long sLongLong;
	float sFloat;

	printf("Size of a char: %d byte(s)\n", sizeof(sChar));
	printf("Size of an int: %d byte(s)\n", sizeof(sInt));
	printf("Size of a long int: %d byte(s)\n", sizeof(sLongInt));
	printf("Size of a long long int: %d byte(s)", sizeof(sLongLong));
	printf("Size of a float: %d byte(s)", sizeof(sFloat));



	return (0);
}
