#include "lists.h"

/**
 * print_list - check the code
 * @h: Name of the list
 * Return: The number of nodes
 */
size_t list_len(const list_t *h)
{
	unsigned int node = 0;

	while (h)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%d] %s\n", h->len, h->str);
		}
		count++;
		h = h->next;
	}
	return (count);
}
