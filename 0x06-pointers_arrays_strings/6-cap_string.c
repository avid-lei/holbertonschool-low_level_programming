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
	char alph;
	char alphA;
	int x;

	while (*t)
	{

		for (x = 0; check[x] != '\0'; x++)

			if (*t == check[x])
			{
				count = 0;
				break;
			}
		for (alph = 'a'; alph <= 'z'; alph++)
		{
			if (*t == alph)
			{
				count++;
				break;
			}
		}


		for (alphA = 'A'; alphA <= 'Z'; alphA++)
		{
			if (*t == alphA)
			{
				count++;
				break;
			}
		}


		if (count == 1 && (*t >= 'a' && *t <= 'z'))
			*t = *t - 32;

		t++;


	}



	return (s);
}
