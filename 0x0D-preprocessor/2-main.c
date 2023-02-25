#include <stdio.h>
/**
 * main - will print name of file currently compiling
 *
 * Return: 0 or name of file
 */
int main(void)
{
	printf("%s\n", __FILE__);
	return (0);
}
