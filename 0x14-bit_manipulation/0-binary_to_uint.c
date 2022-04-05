#include "main.h"

/**
 * binary_to_unit - Function that convert binary to int
 * @b: Const char
 * Return: Success!
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int shift = 0;
	int a = 0;

	if (b == 0)
		return (0);

	for (a = 0; b[a]; a++)
	{
		if (b[a] != '0' && b[a] != '1')
			return (0);
	}
	for (a = 0; b[a]; a++)
	{
		shift <<= 1;
		if (b[a] == '1')
			shift += 1;
	}
	return (shift);
}
