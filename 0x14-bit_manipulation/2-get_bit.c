#include "main.h"
#include <math.h>

/**
 * get_bit - Function that returns value of bit
 * @index: Index
 * @n: Unsigned integer
 * Return: Success!
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= 65)
	{
		return (-1);
	}
	if (index == 0)
	{
		return (n & 1);
	}
	return (get_bit(n >> 1, index - 1));
}
