#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - prints strings followed by a new line
 * @separator:const char
 * @n: const unsigned int
 * Return: Always 0.
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list valist;
	unsigned int x;
	char *s;


	va_start(valist, n);

	for (x = 0; x < n ; x++)
	{

		s = va_arg(valist, char *);
		if (s == NULL)
			printf("(nil)");
		else
		{
			printf("%s", s);
			if (x < n -1 && !separator)
				printf("%s", separator);
		}
	}

	va_end(valist);
	printf("\n");



}


