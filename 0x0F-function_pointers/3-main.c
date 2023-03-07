#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - entry point
 * @argc: count
 * @argv: value
 *
 * Return: int
 */

int main(int argc, char *argv[])
{
	int x, y, z;
	int (*fun)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	x = atoi(argv[1]);
	y = atoi(argv[3]);
	fun = get_op_func(argv[2]);
	if (fun == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	z = fun(x, y);
	printf("%d\n", z);
	return (0);
}
