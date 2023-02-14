#include "holberton.h"
/**
 * cap_string - function to capitalize first letter of every word
 * @s: string to be capitalized
 *
 * Return: a pointer to string
 */

char *cap_string(char *s)
{
	int i = 0, x;
	char a[] = " \t\n,.;?!\"(){}";

	while (*(s + i))
	{
		if (*(s + i) >= 'a' && *(s + i) <= 'z')
		{
			if (i == 0)
				*(s + i) -= 'a' - 'A';
			else
			{
				for (x = 0; x <= 12; x++)
				{
					if (a[x] == *(s + i - 1))
						*(s + i) -= 'a' - 'A';
				}
			}
		}
		i++;
	}
	return (s);
}
