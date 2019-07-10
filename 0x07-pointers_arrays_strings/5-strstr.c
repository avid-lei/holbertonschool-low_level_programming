#include "holberton.h"
/**
  * _strstr- located a substring
  * @haystack:char
  * @needle:char
  * Return:char
  */
char *_strstr(char *haystack, char *needle)
{
char *neelength = needle;
int length = 0;
int count = 0;
int ni = 0;

while (*neelength)
{
	length++;
	neelength++;
}
while (*haystack)
{
	if (*haystack == needle[ni])
	{
		count++;
		haystack++;
		for (ni = 1; needle[ni] != '\0'; ni++)
		{
			if (*haystack == needle[ni])
			{
				count++;
				haystack++;
				if (count == length)
					return (haystack - length);
			}
			else
			{
				count = 0;
				break;
			}
		}
	}
	else if (needle[ni] = '\0')
		return(haystack);
	else
		haystack++;
}
return ('\0');
}
