#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * op_add - addition
 * @a: first
 * @b: seconds
 *
 * Return: a+b
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtraction
 * @a: first
 * @b: second
 *
 * Return: a-b
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_div - function to devide
 * @a: first
 * @b: second
 *
 * Return: a/b
 */

int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mul - multiplies two number
 * @a: first
 * @b: second number
 *
 * Return: a * b
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_mod - remainder if devived by b
 * @a: first number
 * @b: second number
 *
 * Return: remainder
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
