#include "holberton.h"
/**
 *cap_string
 *@s:char
 *Return: char
 */

char *cap_string(char *s)
{
	char *t = s;
	char *check = ",;.!?\"(){} \t\n";
	int count = 0;
	int x;

	while (*t)
	{

		for (x = 0; check[x] != '\0'; x++)

			if (*t == check[x])
			{
				count = 0;
				break;
			}

		if (*t >= 'a' && *t <= 'z')
			count++;

		else if (*t >= 'A' && *t <= 'Z')
			count++;

		else if (*t >= '0' && *t <= '9')
			count++;


		if (count == 1 && (*t >= 'a' && *t <= 'z'))
			*t = *t - 32;

		t++;


	}



	return (s);
}
