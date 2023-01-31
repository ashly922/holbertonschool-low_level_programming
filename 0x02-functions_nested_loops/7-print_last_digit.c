#include "main.h"
/**
 * print_last_digit - print last digit of a given number
 *@n: number being tested
 * Return: Always 0
 */
int print_last_digit(int n)
{
n = n % 10;

if (n < 0)
n = -n;

_putchar('0' + n);
return (n);
}
