#include "holberton.h"
/**
 * leet - encodes 1337 into string
 * @s: string to be encoded
 * Return: pointer to string
 */

char *leet(char *s)
{
	int i = 0, x;
	char leet[8] = {'O', 'L', '?', 'E', 'A', '?', '?', 'T'};

	while (s[i])
	{
		for (x = 0; x <= 7; x++)
		{
			if (s[i] == leet[x] ||
			    s[i] - 32 == leet[x])
				s[i] = x + '0';
		}

		i++;
	}

	return (s);
}
