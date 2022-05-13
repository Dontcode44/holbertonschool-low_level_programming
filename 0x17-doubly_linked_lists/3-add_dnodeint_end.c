#include "lists.h"

/**
 * add_dnodeint_end - Function that adds node at the end
 * @head: Header
 * @n: Const int
 * Return: Success!
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *last = *head;

	new = malloc(sizeof(dlistint_t));
	if (head == NULL)
	{
		return (NULL);
	}
	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		new->prev = NULL;
		*head = new;
		return (new);
	}
	while (last->next != NULL)
	{
		last->next = new;
		new->prev = last;
	}
	return (new);
}
