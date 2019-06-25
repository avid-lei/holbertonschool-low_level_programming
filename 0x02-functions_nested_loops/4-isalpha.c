#include "holberton.h"

/**
* main - Entry point
*
* Return: Always 0 (Success)
*/

int _isalpha(int c)
{
char lower;
char upper;

for (lower = 'a'; lower <= 'z'; lower++)
{
	if (c == lower)
		return (1);
}

for (upper = 'A'; upper <= 'Z'; upper++)
{
	if (c == upper)
		return (1);
}
	return (0);
}

