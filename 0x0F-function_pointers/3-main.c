#include "3-calc.h"
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 * @argc: the number of the parameters
 * @argv: the parameters in the case the number to be calculated.
(* a blank line
* Description: this program is the enttry point for a calculator)?
(* section header: 3-calc.h)*
* Return: 0 in success
*/
int main(int argc, char *argv[])
{
	int (*ptr)(int, int);
	int n1, n2;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	n1 = atoi(argv[1]);
	n2 = atoi(argv[3]);

	ptr = get_op_func(argv[2]);

	if (ptr == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	printf("%d\n", ptr(n1, n2));
	return (0);
}
