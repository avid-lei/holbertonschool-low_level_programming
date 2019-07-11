#include "holberton.h"

int is_palindrome(char *s);
int palcheck(char *s, int x, int i);

/**
 *_strlen-length of string
 *@s:char
 *Return:int
 */

int _strlen(char *s)
{
	if (*s)
		return (1 + _strlen(s + 1));
	return (0);
}

/**
 *is_palindrome - checks for a palidrome
 *@s:int
 * Return:int
 */

int is_palindrome(char *s)
{
	int length;
	int i = 0;

	length = _strlen(s);
	if (length > 1)
		return (palcheck(s, length - 1, i));

	return (1);

}

/**
 *palcheck - checks palindrome
 *@s:char
 *@x:int
 *@i:int
 *Return:1
 */

int palcheck(char *s, int x, int i)
{

	if (i <= (x / 2) && s[i] == s[x])
	{
		return (palcheck(s, x - 1, i + 1));
	}
	else if (i > (x / 2))
		return (1);
	else
		return (0);
}

