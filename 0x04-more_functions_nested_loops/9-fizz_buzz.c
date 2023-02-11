#include <stdio.h>
#include "main.h"

/**
 * main - entry point
 *
 * Return: Always: 0
 */
int main(void)

{
	int i = 1;

	while (i <= 100)
	{
		if (i % 3 == 0 && i % 5 == 0)
			printf("FizzBuzz");
		else if (i % 5 == 0)
		{
			if (i == 100)
			{
				printf("Buzz");
				printf("\n");
			}
			else
				printf("Buzz");
		}
		else if (i % 3 == 0)
			printf("%d", i);

		i++;
	}
	return (0);
}
