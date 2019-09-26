#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *string_nconcat- concats 2 strings
 *@s1: char
 *@s2: char
 *@n: unsigned int
 *Return: char
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s2 = s1;
	char *ar;
	unsigned int len1 = 0, len2 = 0, x, j, b = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

for (len1 = 0; s1[len1] != '\0'; len1++)
;
for (len2 = 0; s2[len2] != '\0'; len2++)
;

if (n < len2)
	b = n + 1;
else if (n >= len2)
	b = len2 + 1;
ar = malloc(sizeof(char) * (b + len1));
	if (ar == NULL)
	{
		free(ar);
		return (NULL);
	}
for (x = 0; s1[x] != '\0'; x++)
	ar[x] = s1[x];

for (j = 0; j < b - 1; j++, x++)
	ar[x] = s2[j];

ar[x] = '\0';
return (ar);
}
