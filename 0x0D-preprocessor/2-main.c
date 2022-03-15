#include <stdio.h>
#include <stdlib.h>
/**
 * main - Program that prints the file name it was compiled from
 * Return: always Success!
 */

int main(void)
{
	printf("%s\n", __FILE__);
	return (0);
}
