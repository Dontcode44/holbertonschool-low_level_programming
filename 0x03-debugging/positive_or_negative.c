#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * positive_or_negative - Function that prints if integer
 * is positive or negative
 * Description: This function prints if the number 98 is n or p
 * @i: Variable integer
 * Return: Always 0 (Success)
 */

void positive_or_negative(int i)
{
	if (i > 0)
		printf("%d is positive\n", i);
	else if (i == 0)
		printf("%d is zero\n", i);
	else
		printf("%d is negative\n", i);
}
