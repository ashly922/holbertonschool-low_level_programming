#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_c - prints char
 * @c: char to print
 *
 * Return: void
 */
void print_c(va_list c)
{
	printf("%c", va_arg(c, int));
}

/**
 * print_s - prints a string
 * @s: string to print
 *
 * Return: void
 */
void print_s(va_list s)
{
	char *st = va_arg(s, char *);

	if (st == NULL)
		st = "(nil)";
	printf("%s", st);
}

/**
 * print_i - print int
 * @i: int to print
 *
 * Return: void
 */
void print_i(va_list i)
{
	printf("%d", va_arg(i, int));
}

/**
 * print_f - print double f
 * @f: float to print
 *
 * Return: void
 */

void print_f(va_list f)
{
	printf("%f", va_arg(f, double));
}

/**
 * print_all - print all
 * @format: list of arg to pass to finction
 *
 * Return: void
 */

void print_all(const char * const format, ...)
{
	unsigned int x, y;
	print_t p[] = {
		{"c", print_c},
		{"s", print_s},
		{"i", print_i},
		{"f", print_f},
		{NULL, NULL}
	};
	va_list valist;
	char *separator = "";

	va_start(valist, format);
	x = 0;
	while (format && format[x])
	{
		y = 0;
		while (p[y].t != NULL)
		{
			if (*(p[y].t) == format[x])
			{
				printf("%s", separator);
				p[y].f(valist);
				separator = ", ";
				break;
			}
			y++;
		}
		x++;
	}
	va_end(valist);
	printf("\n");
}
