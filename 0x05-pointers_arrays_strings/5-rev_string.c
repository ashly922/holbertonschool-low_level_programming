#include "main.h"
#include <stdio.h>

/**
 * rev_string - Reverses string
 * @s: The string to be reversed.
 * Return: Always 0
 */
void rev_string(char *s)
{
	int len = 0, x = 0;
	char tmp;

	while (s[x++])
		len++;

	for (x = len - 1; x >= len / 2; x--)
	{
		tmp = s[x];
		s[x] = s[len - x - 1];
		s[len - x - 1] = tmp;
	}
}
