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

	if (!separator)
		return;

	va_start(valist, n);

	for (x = 0; x < n - 1; x++)
	{

		if (!va_arg(valist, char *))
			printf("Nil");
		else
			printf("%s", va_arg(valist, char *));

		printf("%s", separator);
	}

	printf("%s", va_arg(valist,char *));
	printf("\n");



}


