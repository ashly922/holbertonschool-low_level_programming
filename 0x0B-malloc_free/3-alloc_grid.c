#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - create 2d array of int
 * @width: width of arr
 * @height: height of arr
 *
 * Return: pointer to arr
 */
int **alloc_grid(int width, int height)
{
	int x, y;
	int **z;

	if (width <= 0 || height <= 0)
		return (NULL);
	z = (int **)malloc(sizeof(int *) * height);
	if (z == NULL)
		return (NULL);
	for (x = 0; x < height; x++)
	{
		z[x] = (int *)malloc(sizeof(int) * width);
		if (z[x] == NULL)
		{
			for (y = 0; y < x; y++)
				free(z[y]);
			free(z);
			return (NULL);
		}
		for (y = 0; y < width; y++)
		{
			z[x][y] = 0;
		}
	}
	return (z);
}
