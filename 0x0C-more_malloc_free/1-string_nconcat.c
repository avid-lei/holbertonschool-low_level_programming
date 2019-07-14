#include "holberton.h"
/**
 *string_nconcat- concats 2 strings
 *@s1: char
 *@s2: char
 *@n: unsigned int
 *Return: char
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s1len = s1;
	char *s2len = s2;
	char *ar;
	unsigned int len1 = 0, len2 = 0, x, j, b;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (*s1len)
	{
		s1len++;
		len1++;	}
	while (*s2len)
	{
		s2len++;
		len2++;	}

if (n < len2)
	b = n + 1;
else if (n >= len2)
	b = len2 + 1;

ar = malloc((len1 + b) * sizeof(char));
	if (ar == NULL)
		return (NULL);

for (x = 0; s1[x] != '\0'; x++)
	ar[x] = s1[x];

for (j = 0; j < b - 1; j++, x++)
	ar[x] = s2[j];

ar[x] = '\0';

return (ar);
}
