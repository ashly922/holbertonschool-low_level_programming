#include "main.h"
/**
 * _pow_recursion - function will print value of x to the y power
 * @x: original value
 * @y: value of the power to x
 * Return: value of x to y power
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, y - 1));
}
