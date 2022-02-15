#include "main.h"

/**
 * main - print_alphabet_x10 - Prints the alphabet x10
 *
 * Return: Always 0.
 */

void print_alphabet_x10(void)
{
	int alph;
	int alpha;

	for (alph = 0; alph <= 9; alph++)
	{
		for (alpha = 'a'; alpha <= 'z'; alpha++)
		{
			_putchar(alpha);
		}
		_putchar('\n');
	}
}
