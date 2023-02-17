#include "main.h"
/**
 * _strlen_recursion - prints byte length of string
 * Return: string length plus 1 for null, integer
 * @s: string to be sized
 */
int _strlen_recursion(char *s)
{
	if (*s != '\0')
		return (1 + _strlen_recursion(s + 1));
	else
		return (0);
}
