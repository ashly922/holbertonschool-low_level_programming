#include "main.h"
/**
 * _strpbrk - searches string for set of bytes
 * @s: string input
 * @accept: set of bytes to be searched for
 * Return: s or null if matched or not
 */
char *_strpbrk(char *s, char *accept)
{
	int len;

	while (*s)
	{
		for (len = 0; accept[len]; len++)
		{
			if (*s == accept[len])
				return (s);
		}
		s++;
	}
	return ('\0');
}
