#include "holberton.h"
#include <stdio.h>
/**
  * _strchr - locates a character in a string
  * @s : char
  * @c : char
  * Return: char
  */

char *_strchr(char *s, char c)
{
for (; *s; s++)
{
	if (*s == c)
	{
		return (s);
	}
}
return (NULL);

}


