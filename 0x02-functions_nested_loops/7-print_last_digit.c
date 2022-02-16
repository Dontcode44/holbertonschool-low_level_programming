#include "main.h"

/**
 * print_last_digit - Prints the last digit
 * @l: Function parameter
 * Return: Success l
 */

int print_last_digit(int l)
{
	l = l % 10;

	if (l < 0)
	{
		l = (l * -1);
	}
	_putchar(l + '0');
	return (l);
}
