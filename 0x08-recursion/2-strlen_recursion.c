#include "holberton.h"

/**
 * _strlen_recursion- length of string
 *@s:char
 * Return: int
 */

int _strlen_recursion(char *s)
{
int count = 0;
if (*s)
{
	count = 1 + _strlen_recursion(s + 1);
}
return (count);
}
