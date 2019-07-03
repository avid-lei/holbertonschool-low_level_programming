#include "holberton.h"
#include <stdio.h>
/**
 *_atoi - a to i
 *@s:char
 *Return: int
 */

int _atoi(char *s)
{
	int negcounter = 0;
	int number;

	while (*s)
	{
		if (*s == '-')
		{
			negcounter++;
			s++;
		}
		else if (*s >= '0' && *s <= '9')
		{
			number = *s - '0';
			s++;
			while (*s >= '0' && *s <= '9')
			{
				number = (number * 10) + (*s - '0');
				s++;
			}
			if (negcounter % 2 == 1)
				return (number * (-1));
			else
				return (number);

		}
		else
			s++;


	}
	return (0);

}
