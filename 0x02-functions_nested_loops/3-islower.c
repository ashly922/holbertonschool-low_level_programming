#include "main.h"
/**
 * _islower - checks for lowercase
 * main - check the code
 * @c: lowercase
 * Return:  (0) for success (1) for fail
 */
int _islower(int c)
{
if (c >= 'a' && c <= 'z')
{
return (1);
}
else
{
return (0);
}
}
