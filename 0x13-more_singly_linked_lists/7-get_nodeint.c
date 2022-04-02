#include "lists.h"

/**
 * get_nodeint_at_index - Function that prints n node
 * @index: Unsigned integer
 * @head: Header from list
 * Return: NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int n = 0;

	while (head != NULL)
	{
		if (n == index)
			return (head);
		head = head->next;
		n++;
	}
	return (NULL);
}
