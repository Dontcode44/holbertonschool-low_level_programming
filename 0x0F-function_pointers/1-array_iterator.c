#include "function_pointers.h"
#include <stddef.h>
/**
 * array_iterator - Array
 * @array: Array main
 * @size: Array size
 * @action: Function accion
 * Return: ;
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int a;

	if (array == NULL && action == NULL)
		return;
	for (a = 0; a < size; a++)
		action(array[a]);
}
