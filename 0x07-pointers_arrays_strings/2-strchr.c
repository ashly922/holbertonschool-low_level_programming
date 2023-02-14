#include "main.h"
/**
 * _strchr - function to locate char in string
 * @s: sting to be searched
 * @c: charister to search for
 *
 * Return: (i)
 */
char *_strchr(char *s, char c)
{
	char *i = '\0';

	if (*s != '\0')
	{
		do	{
			if (*s == (char) c)
			{
				i = s;
				break;
			}
		}
			while (*s++);
	}
	return (i);
}
