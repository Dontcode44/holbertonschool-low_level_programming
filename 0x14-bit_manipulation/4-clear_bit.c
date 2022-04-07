#include "main.h"

/**
 * clear_bit - Function that sets a value of bit
 * @index: Index from starting
 * @n: Unsigned long type integer
 * Return: Success!
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int sett;

	if (index > 63)
		return (-1);

	sett = 1 << index;
	*n = *n & ~sett;
	return (1);
}
