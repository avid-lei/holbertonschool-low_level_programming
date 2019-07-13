#include "holberton.h"
/**
  *_strdup - contains a copy of the string given as a parament
  *@str: char
  *Return:char
  */

char *_strdup(char *str)
{

char *strlength = str;
char *ar;
unsigned int i, length;

while (*strlength)
{
strlength++;
length++;
}

if (str == NULL)
	return (NULL);

if (length < 1)
	return (NULL);

ar = malloc(length *sizeof(char));

if (ar == NULL)
{
	return (NULL);
}

for (i = 0; i < length; i++)
{
	ar[i] = str[i];
}
ar[i] = '\0';

return (ar);




}

