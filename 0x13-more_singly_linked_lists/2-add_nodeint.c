#include "lists.h"

/**
 * add_nodeint - Function that add node beginning
 * @head: Header from the list
 * @n: Const integer
 * Return: Head
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *init = NULL;

	init = malloc(sizeof(listint_t));

	if (init == NULL)
	{
		return (NULL);
	}
	init->n = n;
	init->next = *head;
	*head = init;
	return (*head);
}
