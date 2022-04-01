#include "lists.h"

/**
 * print_listint -  Function that prints all the elements of a list
 * @h: Pointer from structure list
 * Return: Amount of elements
 */

size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		count++;
		h = h->next;
	}
	return (count);
}
