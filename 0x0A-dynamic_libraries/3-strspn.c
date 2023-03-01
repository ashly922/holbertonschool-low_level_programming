#include "main.h"
/**
 * _strspn - function to scan string
 * @s: string to be scanned
 * @accept: characters to match
 * Return: (i)
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int len, i;

	for (len = 0; s[len]; len++)
	{
		for (i = 0; accept[i]; i++)
		{
			if (s[len] == accept[i])
				break;
		}
		if (!accept[i])
			break;
	}
	return (len);
}
