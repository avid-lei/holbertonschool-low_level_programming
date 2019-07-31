#include <stdarg.h>
#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_numbers - prints numbers followed by new line
 * @separator:char
 * @n:int
 * Return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{

	va_list valist;
	unsigned int i;


	va_start(valist, n);

	for (i = 0; i < n; i++)
	{

		printf("%d", va_arg(valist, int));
		if ( i < n-1 && separator)
			printf("%s", separator);

	}
	va_end(valist);
	printf("\n");

}
