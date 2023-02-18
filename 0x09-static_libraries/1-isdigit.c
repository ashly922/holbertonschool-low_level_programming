#include <stdio.h>
#include "main.h"

/**
	* _isdigit - checks for a digit (0-9)
	* main - check the code
	* @c: digit to be checked
	* Return: (1) for success (0) for fail
	*/
int _isdigit(int c)

{

	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
}
}
