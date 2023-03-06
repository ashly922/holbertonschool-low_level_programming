#include "main.h"
#include <stdlib.h>
/**
 * array_range - create array
 * @min: fisr int
 * @max: last in
 * Return: pointer to new memory of array
 */
int *array_range(int min, int max)
{
	int x, y;
	int *p;

	if (min > max)
		return (NULL);
	y = max - min + 1;
	p = malloc(sizeof(int) * y);
	if (p == NULL)
		return (NULL);
	for (x = 0; x < y; x++, min++)
	{
		p[x] = min;
	}
	return (p);
}
