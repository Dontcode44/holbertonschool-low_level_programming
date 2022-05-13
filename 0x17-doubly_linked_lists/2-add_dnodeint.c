#include "lists.h"
/**
 * add_dnodeint - Function thats adds new node beginning
 * @head: Header of node
 * @n: Const int
 * Return: Success!
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	if (head == NULL)
	{
		return (NULL);
	}
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->next = *head;
	new->prev = NULL;
	new->n = n;
	if (*head != NULL)
	{
		(*head)->prev = new;
	}
	*head = new;
	return (new);
}
