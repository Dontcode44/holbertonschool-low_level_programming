#include "main.h"
/**
 *
 *
 *
 */
void print_to_98(int n)
{
	if(n <= 98)
	{
		for (n = n; n <= 97; n++)
			_putchar("%d, ", n);
	}
	else
		for(n = n; n > 98; n--)
			_putchar("%d, " n);
}
