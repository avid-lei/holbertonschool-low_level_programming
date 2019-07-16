#include <stdarg.h>
#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_numbers - prints numbers followed by new line
 * @seperator: const char
 * @n:const unsigned int
 * Return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{

	va_list valist;
	unsigned int i;
	int x;

	if (separator == NULL)
		return;

	va_start(valist, n);

	for (i = 0; i < (n - 1); i++)
	{

	printf("%d", va_arg(valist, int));

		for (x = 0; separator[x] != '\0'; x++)
			printf("%c", separator[x]);

	}
	printf("%d", va_arg(valist, int));
	printf("\n");

}
