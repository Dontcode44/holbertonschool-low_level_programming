#include "function_pointers.h"
#include <stdio.h>

/**
 * int_index - Function that searches for an integer.
 * @array: Array elements
 * @size: Array size
 * @cmp: Pointer to function
 * Return: a(index from array)
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int a;

	if (array == NULL)
		return (-1);

	if (size <= 0)
		return (-1);

	if (cmp == NULL)
		return (-1);

	for (a = 0; a < size; a++)
	{
		if (cmp(array[a]) != 0)
			return (a);
	}
	return (-1);
}
