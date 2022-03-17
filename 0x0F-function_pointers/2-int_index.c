#include "function_pointers.h"
#include <stdio.h>

/**
 * ind_index - Function that searches for an integer.
 * @array: Array elements
 * @size: Array size
 * @cmp: Pointer to function
 * Return: a(index from array)
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size >= 0 && array != NULL && cmp != NULL)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
			{
				return (i);
			}
		}
	}
	return (-1);
}
