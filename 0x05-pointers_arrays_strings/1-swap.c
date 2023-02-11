#include "main.h"

/**
 * swap_int - swaps two integers
 *@a: parameter declaration to swap
 *@b: other parameter declaration of b to swap
 * Return: the swapped
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
