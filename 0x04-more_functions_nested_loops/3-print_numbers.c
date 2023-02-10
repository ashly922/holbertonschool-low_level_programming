#include <stdio.h>
#include "main.h"

/**
	* print_numbers - prints specifieed number sequence
	*  main - check the code
	*  @s: integer
	*  Return: (0) through (9) followed by a newline
	*/

void print_numbers(void)

{
	int s;


	for (s = 0; s <= 9; s++)
	{
		_putchar(s);
	}
	_putchar('\n');
}
