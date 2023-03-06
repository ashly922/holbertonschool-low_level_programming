#include <stdlib.h>
#include "main.h"
/**
 * _calloc - allocated memory for the array
 * @nmemb: number of elements in the array
 * @size: size of elements in bytes
 * Return: pointer to memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *x;
	unsigned int y;

	if (nmemb == 0 || size == 0)
		return (NULL);
	x = malloc(nmemb * size);
	if (x == NULL)
		return (NULL);
	for (y = 0; y < (nmemb * size); y++)
		x[y] = 0;
	return (x);
}
