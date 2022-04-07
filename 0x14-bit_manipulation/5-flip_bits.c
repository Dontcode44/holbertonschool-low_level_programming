#include "main.h"

/**
 * flip_bits - Function that returns the number of bits
 * @m:Unsigned long integer
 * @n: Unsigned long integer
 * Return: Success!
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor, flip;

	xor = n ^ m;

	for (flip = 0; xor ; xor >>= 1)
	{
		if (xor & 1)
		{
			flip++;
		}
	}
	return (flip);
}
