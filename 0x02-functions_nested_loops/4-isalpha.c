#include "main.h"
/**
 * _isalpha - checks for lowercase and uppercase
 * main - check the code
 * @c: lowercase
 * Return:  (0) for success (1) for fail
 */
int _isalpha(int c)
{
if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
{
return (1);
}
else
{
return (0);
}
}
