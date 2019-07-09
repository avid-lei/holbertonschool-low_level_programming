#include "holberton.h"
/**
 * _strspn - gets the length of a prefix substring
 * @s : char
 * @accept : char
 * Return:unsigned int
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int x;
	unsigned int ax = 0;
	unsigned int i = 0;
	unsigned int sx;
	char temp;

	for (sx = 0; s[sx] != '\0'; sx++)
	{
		for ( x = 0; accept[x] != '\0' && accept[ax] != '\0' ; x++)
		{
			if (s[sx] == accept[x])
			{
				temp = accept[x];
				accept[x] = accept[ax];
				accept[ax] = temp;
				ax = ax + 1;

				if (sx > i)
					i = sx;

				break;
			}


		}
	}
	return (i);

}
