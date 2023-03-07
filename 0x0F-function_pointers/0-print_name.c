#include "function_pointers.h"
#include <stdio.h>
/**
 * print_name - prints the name
 * @name: name in reference
 * @f: function that prints
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
