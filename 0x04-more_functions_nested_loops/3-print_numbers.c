#include <stdio.h>
#include "main.h"

/**
	* print_numbers - prints (0) through (9)
	*  main - check the code
	*  @s: integer
	*  Return: (0) through (9) followed by a newline
	*/

void print_numbers(void)

{
	int s = '0';

	while (s <= '9')
	{
		_putchar (s);
			s++;
	}
	_putchar ('\n');
}
