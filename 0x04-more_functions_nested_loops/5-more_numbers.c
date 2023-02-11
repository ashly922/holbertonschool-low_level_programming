#include <stdio.h>
#include "main.h"

/**
 * more_numbers -  print 10 times 0 to 14
 * follow with new line
 * Return - 1-14 ten times
 */

void more_numbers(void)

{
	int x;
	int y;

	x = 0;
	y = 0;

	while (x < 10)
	{
		while (y <= 14)
		{
			if (y >= 10)
			_putchar(y / 10 + '0');
			_putchar(y % 10 + '0');
			y++;
		}
		_putchar('\n');
		y = 0;
		x++;
	}
}
