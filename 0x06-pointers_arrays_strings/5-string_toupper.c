#include "holberton.h"
/**
 * string_toupper - function to turn lowercase into upper
 * @str: assining name to pointer
 *
 * Return: str
 */

char *string_toupper(char *str)
{
	int i = 0;

	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;

		i++;
	}
	return (str);
}
