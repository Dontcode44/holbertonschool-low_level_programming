#include "main.h"
#include <stdlib.h>
#include <math.h>

/**
 * _abs - Computes the absolute value
 * of an integer
 * @ab: Number to check
 * Return: Absolute value
 */

int _abs(int ab)

{
	if (ab >= 0)
		return (ab);
	else
		return (ab * -ab);
	}
