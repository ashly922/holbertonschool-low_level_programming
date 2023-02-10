#include <stdio.h>
#include "main.h"

/**
	*print_most_numbers - prints 0 through 9
	*skips 2 and 4
	*
	*/

void print_most_numbers(void)

{
	int r;

	for (r = '0'; r <= '9'; r++)
	{
		if (!(r == '2' || r == '4'))
			_putchar(r);
	}
	_putchar('\n');
}
