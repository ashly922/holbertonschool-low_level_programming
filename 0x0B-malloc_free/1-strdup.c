#include <stdlib.h>
#include <string.h>
/**
 * _strdup - function returns pointer to newly allocated memory
 * @str: string copying
 * Return: pointer to duplicated string or NULL
 */
char *_strdup(char *str)
{
	unsigned int x, y;
		char *z;

	if (str == NULL)
		return (NULL);
	for (x = 0; str[x]; x++)
		;

	x++;
	z = malloc(x * sizeof(char));
	if (z == NULL)
	{
		return (NULL);
	}
	for (y = 0; y < x; y++)
	{
		z[y] = str[y];
	}
	return (z);
}
