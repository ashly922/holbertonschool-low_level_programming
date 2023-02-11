#include "main.h"
/**
 * _strlen - char *s int
 * @s: declaring s for _strlen
 * Return: Always (x)
 */
int _strlen(char *s)
{
	int x;

	for (x = 0; s[x] != 0;)
		x++;

	return (x);
}
