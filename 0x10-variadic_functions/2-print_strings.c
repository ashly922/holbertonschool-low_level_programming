#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_strings - prints strings
 * @separator: space between strings
 * @n: number of strings
 *
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int x;
	char *s;
	va_list valist;

	va_start(valist, n);
	for (x = 0; x < n; x++)
	{
		s = va_arg(valist, char *);
		if (s)
			printf("%s", s);
		else
			printf("(nil)");
		if (x < n - 1 && separator)
			printf("%s", separator);
	}
	printf("\n");
	va_end(valist);
}
