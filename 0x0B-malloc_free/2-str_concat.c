#include "main.h"
#include <stdlib.h>
/**
 * str_concat - concatenates two strings
 * @s1: first
 * @s2: second
 *
 * Return: pointer to space in mem
 */
char *str_concat(char *s1, char *s2)
{
	unsigned int x, y, z, a;
	char *b;

	if (s1 == NULL)
		x = 0;
	else
	{
		for (x = 0; s1[x]; x++)
			;
	}
	if (s2 == NULL)
		y = 0;
	else
	{
		for (y = 0; s2[y]; y++)
			;
	}
	z = x + y + 1;
	b = malloc(z * sizeof(char));
	if (b == NULL)
		return (NULL);
	for (a = 0; a < x; a++)
		b[a] = s1[a];
	for (a = 0; a < y; a++)
		b[a + x] = s2[a];
	b[x + y] = '\0';
	return (b);
}
