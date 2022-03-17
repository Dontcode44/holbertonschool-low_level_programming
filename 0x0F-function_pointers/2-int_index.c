#include "function_pointers.h"

/**
 * ind_index - Function that searches for an integer.
 * @array: Array
 * @size: Array size
 * @cmp: Pointer to function
 * Return: Success
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int a;

	if (array == NULL && size >= 0 && cmp != NULL)

		for (a = 0; a < size; a++)
		{
			if (cmp(array[a]) != 0)
			{
				return (a);
			}
		}
	return (-1);
}
