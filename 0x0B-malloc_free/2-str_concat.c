#include "holberton.h"

/**
  *str_concat-cat 2 strings
  *@s1: char
  *@s2: char
  *Return: char
  */


char *str_concat(char *s1, char *s2)
{
unsigned int length1;
unsigned int length2;
unsigned int i, j;
char *ar;

for (length1 = 0; s1[length1] != '\0'; length1++)
;
for (length2 = 0; s2[length2] != '\0'; length2++)
;
length2++;

if (s1 == NULL)
	s1 = "";
if (s2 == NULL)
	s2 = "";

ar = malloc((length1 * sizeof(char)) + (length2 *sizeof(char)));

if (ar == NULL)
{
	free(ar);
	return (NULL);
}

for (i = 0; i < length1; i++)
	ar[i] = s1[i];

for (j = i, i = 0; j < (length2 + length1); j++, i++)
	ar[j] = s2[i];


ar[j] = '\0';

return (ar);

}
