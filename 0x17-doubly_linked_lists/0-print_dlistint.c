#include "lists.h"

/**
 * print_dlistint - Prints all elements
 * @h: Pointer to header node
 * Return: Success!
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t i = 0;

	for (; h != NULL; i++)
	{
		printf("%d\n", h->n);
		h = h->next;
		i++;
	}
	return (i);
}
