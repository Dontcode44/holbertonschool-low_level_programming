#include "lists.h"

/**
 * add_nodeint_end - Function that add node at the end
 * @n: Type integer variable
 * @head: Header from struct node
 * Return:
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *node;
	listint_t *x;

	node = malloc(sizeof(listint_t));
	if (node == NULL)
	{
		return (NULL);
	}
	node->n = n;
	node->next = NULL;

	if (*head == NULL)
	{
		*head = node;
		return (*head);
	}
	else
	{
		x = *head;

		while (x->next)
		{
			x = x->next;
		}
		x->next = node;
	}
	return (node);
}