#ifndef VARIADIC_FUNCTIONS
#define VARIADIC_FUNCTIONS
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>

/**
 *struct arg-structure
 *@letter: char*
 *@f: pointer to function
 */

typedef struct arg
{
char *letter;
void (*f)(va_list);
} arg;


int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

#endif
