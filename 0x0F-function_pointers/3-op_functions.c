#include <stdio.h>
#include "3-calc.h"
#include <stdlib.h>

/**
 * op_add - Plus operation function two numbers
 * @a: Integer variable
 * @b: Integer variable
 * Return: Success!
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - Minus operation function two numbers
 * @a: Integer variable
 * @b: Integer variable
 * Return: Success!
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - Multiplication operation function two numbers
 * @a: Integer variable
 * @b: Integer variable
 * Return: Success!
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - Division operation function two numbers
 * @a: Integer variable
 * @b: Integer variable
 * Return: Success!
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}
/**
 * op_mod - Module operation function two numbers
 * @a: Integer variable
 * @b: Integer variable
 * Return: Success!
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
