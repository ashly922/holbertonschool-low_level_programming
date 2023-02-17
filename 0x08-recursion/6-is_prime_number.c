#include "main.h"
/**
 * is_prime_helper - helps the base function decide if a number is prime
 * @n: guess at prime number
 * @i: factoring
 * Return: 0 or the prime integer
 */
int is_prime_helper(int n, int i)
{
	if (i * i > n)
	{
		return (1);
	}
	if (n % i == 0)
	{
		return (0);
	}
	return (is_prime_helper(n, i + 1));
}
/**
 * is_prime_number - checks all the numbers to see if prime
 * @n: number checking
 * Return: 0
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return (is_prime_helper(n, 2));
}
