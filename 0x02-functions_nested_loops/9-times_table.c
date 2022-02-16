#include "main.h"

/**
 * times_table - Prints the tables of the numbers
 * @x, y, result - variables
 * Return: Always variable
 */

void times_table(void)
{
	int x, y, result;

	for (x = 0; x <= 9; x++)
	{
		for (y = 0; y <= 9; y++)
		{
			result = x * y;
			if (y != 0)
			{
				_putchar(',');
				_putchar(' ');
			}
			if (y == 0)
			{
				_putchar('0');
			}
			else if (result >= 10)
			{
				_putchar((result / 10) + '0');
				_putchar((result % 10) + '0');
			}
			else if ((product < 10) && (y != 0))
			{
				_putchar(' ');
				_putchar((result % 10) + '0');
			}
		}
		_putchar('\n');
	}
}
