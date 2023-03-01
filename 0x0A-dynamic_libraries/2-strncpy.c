#include "holberton.h"
/**
 * _strncpy - copies and input number of bytes from sting src to dest
 * @dest: where the string copy is stored
 * @src: the string source
 * @n: number of bytes
 * Return: Always 0
 */
char *_strncpy(char *dest, char *src, int n)
{
	int index = 0, src_len = 0;

	while (src[index++])
		src_len++;

	for (index = 0; src[index] && index < n; index++)
		dest[index] = src[index];

	for (index = src_len; index < n; index++)
		dest[index] = '\0';
	return (dest);
}
