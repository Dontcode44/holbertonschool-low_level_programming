#include "main.h"
#include <math.h>

/**
 * set_bit - Function that sets the value 1
 * @index: Index from starting
 * @n: Pointer unsigned
 * Return: Success!
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	int set;

	if (index > 63)
	{
		return (-1);
	}
	set = 1 << index;
	*n = *n | set;
	return (1);
}
