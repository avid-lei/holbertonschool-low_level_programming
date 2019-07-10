#include "holberton.h"
/**
 *_strstr - locates a substring
 * @haystack:char
 * @needle:char
 * Return: char
 */

char *_strstr(char *haystack, char *needle)
{
	char *needlecount = needle;
	int i;
	int length = 0;
	int count = 0;

while (*needlecount)
{
length++;
needlecount++;
}
	while (*haystack)
	{
		if (*haystack == needle[0])
		{
			count++;
			haystack++;
			for (i = 1; needle[i] != '\0'; i++)
			{
				if (*haystack == needle[i])
				{
					count++;
					if (count == length)
					{
						return (haystack - (count - 1));
					}
					else
						haystack++;
				}
				else
				{	count = 0;
					break;
				}
			}
		}
		else
			haystack++;
	}
return (haystack - 3);
}
