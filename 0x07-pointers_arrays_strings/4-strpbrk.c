#include "holberton.h"
/**
 *_strpbrk-searches string for set of bytes
 *@s: char
 *@accept: char
 * Return: char
 */

char *_strpbrk(char *s, char *accept)
{
int x;
for (;; s++)
{
	for (x = 0; accept[x] != '\0'; x++)
	{
		if (*s == accept[x])
			return (s);

		if (*s == '\0')
			return ('\0');

	}
}
return (s);


}

