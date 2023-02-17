#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _sqrt - function checks for sqrt of yn
 * @x: guess sqrt
 * @y: number to sqrt
 * Return: square root of number or -1
 */
int _sqrt(int x, int y)
{
	if (x * x == y)
		return (x);
	if (x * x > y)
		return (-1);
	return (_sqrt(x + 1, y));
}

/**
 * _sqrt_recursion - returns natural swrt of number
 * @n: given number to find sqrt of
 *  Return: sqrt of n
 */
int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);
	return (_sqrt(1, n));
}
