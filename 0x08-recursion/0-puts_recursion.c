#include "holberton.h"

/**
  * _puts_recursion - prints a string
  *@s: char
  *Returns: always 0
  */

void _puts_recursion(char *s)
{

if (*s)
{
	_putchar(*s);
	s++;
	_puts_recursion(s);
}
else
{
	_putchar('\n');

}
}
