#include "holberton.h"
/**
  * _memset - fills memory with a constant byte
  * @s: char
  * @b: char
  * @n: unsigned int
  * Return: char*
  */

char *_memset(char *s, char b, unsigned int n)
{
char *t = s;
unsigned int x;
for (x = 0; x < n; x++, t++)
{
	*t = b;

}
return (s);
}
