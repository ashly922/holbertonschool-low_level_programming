#include <stdio.h>
#include "holberton.h"
/**
 * _strncat - function that appends stc string to dest
 * @dest: string to be added
 * @src: string to be added
 * @n: number of bytes from src to be appended
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
int index = 0, dest_len = 0;

while (dest[index++])
dest_len++;

for (index = 0; src[index] && index < n; index++)
dest[dest_len++] = src[index];

return (dest);
}
