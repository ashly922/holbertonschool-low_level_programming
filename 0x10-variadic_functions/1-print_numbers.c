#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_numbers -  print numbers
 * @separator: separator to print after each int
 * @n: number of n
 *
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int x;
	int y;
	va_list valist;

	va_start(valist, n);
	for (x = 0; x < n; x++)
	{
		y = va_arg(valist, int);
		printf("%d", y);
		if (x < n - 1 && separator)
			printf("%s", separator);
	}
	printf("\n");
	va_end(valist);
}
