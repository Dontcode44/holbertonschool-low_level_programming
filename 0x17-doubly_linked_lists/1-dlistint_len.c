#include "lists.h"

/**
 * dlistint_len - Number of nodes
 * @h: Header of node
 * Return: Success!
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t i = 0;

	for (; h != NULL; i++)
	{
		h = h->next;
	}
	return (i);
}
