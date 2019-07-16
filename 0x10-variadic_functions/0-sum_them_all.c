#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>

/**
   * sum_them_all - return the sum of all parameters
   * @n:const unsigned int
   * Return: Always 0.
   */

int sum_them_all(const unsigned int n, ...)
{

	va_list valist;
	double sum = 0.0;
	unsigned int i;

	if (n == 0)
		return (0);


	va_start(valist, n);

	for (i = 0; i < n; i++)
		sum = sum + va_arg(valist, int);

	va_end(valist);

	return (sum);



}
