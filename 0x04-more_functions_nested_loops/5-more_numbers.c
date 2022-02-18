#include "main.h"

/**
 * more_numbers - A prints 10 times the numbers, from 0 to 14, followed by a new line.
 * In a line
 * Return: Succes 0
 */
void more_numbers(void)
{
	int a, b = 0;

	for (; b < 10; b++)
	{
		for (a = 0;a <= 14; a++)
		{
			if (i > 9)
			    _putchar(i / 10 + '0');
			    
			_putchar(i % 10 + '0');
		}
		_putchar('\n');
	}
}
