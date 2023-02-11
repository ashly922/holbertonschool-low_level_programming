#include <stdio.h>
#include "main.h"

/**
 * print_line - will print straight line on terminal
 * @n: the number of underscores
 * Return - 0
 */

void print_line(int n)
{
	int i;

	if (n > 0)
		for (i = 0; i < n; i++)
			_putchar('_');
	_putchar('\n');
}
