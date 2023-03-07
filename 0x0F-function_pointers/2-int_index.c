#include "function_pointers.h"
/**
 * int_index - searches of int
 * @array: array to search
 * @size: size of array
 * @cmp: function used
 *
 * Return: -1, 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int x, y;

	if (size > 0 && array && cmp)
	{
		for (x = 0; x < size; x++)
		{
			y = cmp(array[x]);
			if (y)
				break;
		}
		if (x < size)
			return (x);
	}
	return (-1);
}
