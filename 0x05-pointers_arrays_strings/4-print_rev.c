#include "holberton.h"
/**
 *print_rev = prints reverse
 *@s: char
 *Return: void
 */
void print_rev(char *s)
{
	int count, x; 
	while (*s != '\0')
	{
		count++; 
		s++;

	}	
	_putchar(*s);
	_putchar(count + '0');
	for ( x = count; x <= 0; s--)
		_putchar(*s);

}

