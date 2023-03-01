#include "main.h"
/**
 * _strcpy - Copies a string
 * @dest: A buffer to copy the string to
 * @src: The source to copy
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
		while (src[i])
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
		return (dest);
}
