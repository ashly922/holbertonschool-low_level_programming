#include "holberton.h"
/**
 * reverse_array - a function that will revese an array
 * @a: pointer to string
 * @n: length of string
 * @temp - reasing the left side of array to temp
 * @ar assined to right side of array then reassigned as al
 */

void reverse_array(int *a, int n)
{
	int *al = a;
	int *ar = a + n - 1;

	while (al < ar)
	{
		int temp = *al;
		*al = *ar;
		*ar = temp;
		al++;
		ar--;
	}
}
