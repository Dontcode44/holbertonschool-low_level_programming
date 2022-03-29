#include "lists.h"
#include <stdio.h>

/**
 * print_list - check the code
 * @h: Name of the list
 * Return: The number of nodes
 */
size_t list_len(const list_t *h)
{
	unsigned int nodes = 0;

	while (h)
	{
		printf("[%u] ", h->len);
		if (h->str == NULL)
			printf("(nil)\n");
		else
			printf("%s\n", h->str);

		h = h->next;
		nodes++;
	}
	return (nodes);
}
