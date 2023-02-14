#include "main.h"
#include <stdio.h>

/**
 * print_array - Prints elemets of array
 * @a: The array
 * @n: The number of elements
 */
void print_array(int *a, int n)
{
	int x;

	for (x = 0; x < n; x++)
	{
		printf("%d", a[x]);

		if (x == n - 1)
			continue;

		printf(", ");
	}

	printf("\n");
}
