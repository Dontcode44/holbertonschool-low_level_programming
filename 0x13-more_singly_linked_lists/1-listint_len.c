#include "lists.h"

/**
 * listint_len - Frunction that prints list
 * @h: Pointer from structure
 * Return: Numbers of elements
 */
size_t listint_len(const listint_t *h)
{
	size_t i = 0;

	while (h)
	{
		i++;
		h = h->next;
	}
	return (i);
}
