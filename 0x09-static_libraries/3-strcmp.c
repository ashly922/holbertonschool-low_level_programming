#include "holberton.h"
/**
 * _strcmp - this function compares pointers of strings
 * @s1: this is where first sting is stored
 * @s2: this is where the second string is stores
 *
 * Return: the difference of the unmatched char
 */

int _strcmp(char *s1, char *s2)
{
	while ((*s1 && *s2) && (*s1 == *s2))
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
