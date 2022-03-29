#include "lists.h"

/**
 * list_len - A function that the number of elements in list
 * @h: Head of list
 * Return: Elements of list
 */
size_t list_len(const list_t *h)
{
	size_t i= 0;

	while (h)
	{
		i++;
		h = h->next;
	}
	return (i);
}
