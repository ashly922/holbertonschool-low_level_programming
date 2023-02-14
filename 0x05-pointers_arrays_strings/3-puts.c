#include "main.h"
#include <stdio.h>

/**
 * _puts - function that prints a string
 * @str: declaring str for puts
 * Return: Always 0
 */
void _puts(char *str)

{
	for (; *str != '\0'; str++)
	{
		_putchar(*str);
	}
	_putchar('\n');
}
