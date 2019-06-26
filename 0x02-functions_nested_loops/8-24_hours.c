#include "holberton.h"

/**
* jack_bauer - print every minute
*
* Return: Always 0.
*/

void jack_bauer(void)
{
int minutes, hours;
int min1, min10, hour1, hour10;

for (hours = 0; hours < 24; hours++)
{
	for (minutes = 0; minutes < 60; minutes++)
	{	min10 = minutes / 10;
		min1 = minutes % 10;
		hour10 = hours / 10;
		hour1 = hours % 10;

		_putchar(hour10 + '0');
		_putchar(hour1 + '0');
		_putchar(':');
		_putchar(min10 + '0');
		_putchar(min1 + '0');
		_putchar('\n');
	}
}
}
