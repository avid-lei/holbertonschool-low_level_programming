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

	printf("Size of a char: %ld byte(s)\n", sizeof(sChar));
	printf("Size of an int: %ld byte(s)\n", sizeof(sInt));
	printf("Size of a long int: %ld byte(s)\n", sizeof(sLongInt));
	printf("Size of a long long int: %ld byte(s)\n", sizeof(sLongLong));
	printf("Size of a float: %ld byte(s)\n", sizeof(sFloat));



	return (0);
}
