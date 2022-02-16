#include "main.h"

/**
 * void jack_bauer - Print every minute of the day
 * @h, m: Variable hour and minut
 * Description: Tohis function prints the time day
 * Return - Success
 */

void jack_bauer(void)
{
	int h, m;

	for (h = 0; h < 24; h++)
	{
		for (m = 0; m < 24; m++)
		{
			_putchar((h / 10) + '0');
			_putchar((h / 10) + '0');
			_putchar((';'));
			_putchar((m / 10) + '0');
			_putchar((m / 10) + '0');
			_putchar('\n');
		}
	}
}
