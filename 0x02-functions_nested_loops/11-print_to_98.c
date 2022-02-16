#include "main.h"
/**
 * print_to_98 - check
 * @n: variable integer
 * Description: Print the numbers up to 98
 * Return: Success!
 */
void print_to_98(int n)
{
	if(n <= 98)
	{
		for (n = n; n <= 97; n++)
			printf("%d, ", n);
	}
	else
		for(n = n; n > 98; n--)
			printf("%d, " n);
}
