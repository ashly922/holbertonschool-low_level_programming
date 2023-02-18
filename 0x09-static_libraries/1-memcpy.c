#include "main.h"
/**
 * _memcpy - function to set mem
 * @dest: pointer to destin
 * @src: pointer to source
 * @n: number of bytes to copy
 *
 * Return: (Dest)
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *p = (char *) dest;
	const char *ps = (const char *) src;

	if ((*p != '\0') && (*ps != '\0'))
	{
		while (n)
		{
			*(p++) = *(ps++);
			--n;
		}
	}
	return (dest);
}
