#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - sum of all given parameters
 * @n: number of parameters
 *
 * Return: sum of all n
 *
 */
int sum_them_all(const unsigned int n, ...)
{
	int sum = 0;
	unsigned int x;
	va_list valist;

	va_start(valist, n);
	for (x = 0; x < n; x++)
		sum += va_arg(valist, int);
	va_end(valist);
	return (sum);
}
