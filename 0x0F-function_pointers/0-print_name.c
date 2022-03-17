#include "function_pointers.h"
#include <stddef.h>
/**
 * print_name - check the name Bob
 * @name: Name
 * @f: Uppercase
 * Return: Success!
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
