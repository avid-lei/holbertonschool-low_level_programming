#include "holberton.h"
/**
 *strtow-splits a string into word
 *@str: char
 *Return: char
 */
char **strtow(char *str)
{
	char **ar;
	int i, j, wordcount = 0, k = 0, wordlength = 0, x, y;

	if (str == NULL || str[0] == '\0')
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] != ' ' && (str[i + 1] == ' ' || str[i + 1] == '\0'))
		{
			wordcount++;
		}}
	if (wordcount == 0)
		return (NULL);
	ar = malloc((wordcount + 1) * sizeof(char *));
	if (ar == NULL)
	{
		return (NULL);	}
	for (i = 0; str[i] != '\0' &&  k < wordcount; i++)
	{
		if (str[i] != ' ')
		{
			j = i;
			wordlength = 0;
			while (str[j] != '\0' && str[j] != ' ')
				j++, wordlength++;
			ar[k] = malloc((wordlength + 1) * sizeof(char));

			if (ar[k] == NULL)
			{
				for (y = 0; y < k; y++)
					free(ar[k]);
				free(ar);
				return (NULL);	}
			for (x = 0; x < wordlength; x++, i++)
				ar[k][x] = str[i];
			ar[k++][x] = '\0';
		}}
	ar[k] = NULL;
	return (ar);
}
