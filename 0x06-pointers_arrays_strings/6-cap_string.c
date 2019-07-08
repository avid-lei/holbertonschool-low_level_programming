#include "holberton.h"
/**
 *cap_string - capitalize letters in a string
 *@s: char
 *Return: char*
 */

char *cap_string(char *s)
{
	char *t = s;
	char check;

	while (*t)
	{
		if (*t == ' ' || *t == '\t' || *t == '\n' || *t == ',' || *t == ';' ||
			*t == '.' || *t == '!' || *t == '?' || *t == '"' || *t == '(' ||
			*t == ')' || *t == '{' || *t == '}')
		{
			t++;
			for (check = 'a'; check <= 'z' ; check++)
			{
				if (*t == check)
				*t = *t - 32;
			}
			t++;
		}

		else
		{
			t++;
		}
	}
	return (s);
}
