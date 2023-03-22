#include "main.h"

/**
 * flip_bits - counts the number of bit to change
 * @n: first number
 * @m: second number
 *
 * Return: number of bits to change
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, cnt = 0;
	unsigned long int crnt;
	unsigned long int lngint = n ^ m;

	for (i = 63; i >= 0; i--)
	{
		crnt = lngint >> i;
		if (crnt & 1)
			cnt++;
	}

	return (cnt);
}
