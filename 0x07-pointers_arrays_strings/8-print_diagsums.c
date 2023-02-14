#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - print sum of two diagolals
 * @a: the matrix of int
 * @size: size of matrix
 */
void print_diagsums(int *a, int size)
{
	int i, sum = 0, sumx = 0;

	for (i = 0; i < size; i++)
	{
		sum += a[i];
		a += size;
	}

	a -= size;

	for (i = 0; i < size; i++)
	{
		sumx += a[i];
		a -= size;
	}

	printf("%d, %d\n", sum, sumx);
}
