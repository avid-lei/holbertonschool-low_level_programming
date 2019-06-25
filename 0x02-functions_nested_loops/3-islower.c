#include "holberton.h"

/**
* _islower - checks for lowercase letters
*
* Return: Always 0 (Success)
*/

int _islower(int c)
{
char alower;

	for (alower = 'a'; alower <= 'z'; alower++)
	{
		if (c == alower)
			return (1);
	}
return (0);
}
