#include "main.h"
/**
 * _memset - fills memory with constant bytes
 * @s: pointer to destination object
 * @b: value to be filed in
 * @n: number of bytes stores
 *
 * Return: (s)
 */

char *_memset(char *s, char b, unsigned int n)
{
	char *p = s;

	while (n--)
	{
		*p++ = (char) b;
	}
	return (s);
}
