#include "lists.h"

/**
 * pop_listint - Function that deletes the head
 * @head: Header from list
 * Return: Always 0
 */
int pop_listint(listint_t **head)
{
	listint_t *ptr = *head;
	int node = 0;

	if (*head == NULL)
		return (0);

	node = (*head)->n;
	*head = (*head)->next;
	free(ptr);

	return (node);
}
