#include <stdio.h>
#include "main.h"

/**
 * print_diagonal - prints a diagonal line on terminal
 * @n: number of times backslash is printed
 * Return: 0 or backslash
 */

void print_diagonal(int n)

{
	int i, x;

	if (n > 0)
	{
		for (x = 0; x <= n; x++)
		{
			for (i = 1; i <= x; i++)
			{
				if (i != 1)
					_putchar(' ');
				if (i == x)
				{
					_putchar('\\');
					_putchar('\n');
				}
			}
		}
	}
	else
		_putchar('\n');
}
