#include "main.h"

/**
 * print_alphabet_x10 - Print the alphabet 10 times
 * Description: function uses _putchar function to print
 * alphabet in lowercase 10 times
 * Return: Nothing
 */

void print_alphabet_x10(void)
{
	int alph, alpha;

	for (alph = 0; alph <= 9; alph++)
	{
		for (alpha = 'a'; alpha <= 'z'; alpha++)
		{
			_putchar(alpha);
		}
		_putchar('\n');
	}
}
