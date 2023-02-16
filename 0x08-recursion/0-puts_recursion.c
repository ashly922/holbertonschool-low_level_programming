#include "main.h"
/**
 * _puts_recursion - prints string using recursion
 * @s: the string the function refers to
 * Return: whatever s is inside the main.c file
 */
void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar (*s);
		_puts_recursion(s + 1);
		return;
	}
	_putchar('\n');
}
