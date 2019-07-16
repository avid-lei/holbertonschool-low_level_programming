#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 *p_char - print character
 *@c: va_list
 *Return: 0
 */

void p_char(va_list c)
{
	printf("%c", va_arg(c, int));
}

/**
 *p_int - print int
 *@i: va_list
 *Return: 0
 */

void p_int(va_list i)
{
	printf("%d", va_arg(i, int));
}
/**
 *p_float - print float
 *@f: va_list
 *Return: 0
 */

void p_float(va_list f)
{
	printf("%f", va_arg(f, double));
}
/**
 *p_string - print string
 *@str: va_list
 *Return: 0
 */

void p_string(va_list str)
{
	printf("%s", va_arg(str, char *));
}
/**
 *print_all - print everything
 *@format: char *
 *Return: 0
 */

void print_all(const char * const format, ...)
{

	arg check[] = {
		{"c", p_char},
		{"i", p_int},
		{"f", p_float},
		{"s", p_string},
		{NULL, NULL}
	};

	va_list valist;
	int i, j;

	va_start(valist, format);

	i = 0;

	while (format[i] != '\0')
	{
		j = 0;
		while (j < 4)
		{
			if (format[i] == *check[j].letter && j != 3)
			{
				check[j].f(valist);
				printf(", ");
				break;
			}

			if (format[i] == *check[j].letter)
			{
				check[j].f(valist);
			}
			j++;
		}
		i++;
	}
	printf("\n");
}
