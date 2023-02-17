#include "main.h"
/**
 * factorial - gives factorial of a number
 * @n: given number to return factorial of
 * Return: factorial of given number
 */
int factorial(int n)
{
	if (n == 0)
		return (1);
	if (n < 0)
		return (-1);
	else
		return (n * factorial(n - 1));
}
