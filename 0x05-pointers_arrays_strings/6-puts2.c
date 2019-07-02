#include "holberton.h"
/**
 * puts2 - print every other character
 * @str: char
 * Return: always 0
 */

void puts2(char *str)
{

int index; 

for (index = 0; index < _strlen(str); index += 2)
{
	_putchar(str[index]);
}
}
