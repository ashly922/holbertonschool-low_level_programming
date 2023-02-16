#include "main.h"
/**
 * _print_rev_recursion - function prints string in reverse
 * @s: string to be printed all reverse style
 * Return: s backwards
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	_print_rev_recursion(s + 1);
	_putchar(*s);
}
