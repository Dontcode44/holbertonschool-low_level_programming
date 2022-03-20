#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - Variadic function to add number
 * @n: Const unsigned int type
 * Return: Sum of numbers and 0
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, sum = 0;
	va_list addlist;

	va_start(addlist, n);

	if (n == 0)
		return (0);
	for (i = 0; i < n; i++)
	{
		sum += va_arg(addlist, unsigned int);
	}
	va_end(addlist);

	return (sum);
}
