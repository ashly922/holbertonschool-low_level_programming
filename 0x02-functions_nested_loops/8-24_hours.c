#include "main.h"
/**
 * jack_bauer - prints every minute of the day
 *
 * Return: Always 0
 */
void jack_bauer(void)
{
	int x, y, z, b;

	for (x = '0'; x <= '2'; x++)

	{
		for (y = '0'; y <= '9'; y++)
		{
			for (z = '0'; z <= '5'; z++)
			{
				for (b = '0'; b <= '9'; b++)
				{
					if (x >= '2' && y >= '4')
						break;
					_putchar(x);
					_putchar(y);
					_putchar(58);
					_putchar(z);
					_putchar(b);
					_putchar('\n');
				}
			}
		}
	}
}
