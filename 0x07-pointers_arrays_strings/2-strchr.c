#include "holberton.h"
/**
  * _strchr - locates a character in a string
  * @s : char
  * @c : char
  * Return: char
  */

char *_strchr(char *s, char c)
{
while (*s)
{
	if (*s == c)
		return (s);

s++;
}
return ('\0');
}
