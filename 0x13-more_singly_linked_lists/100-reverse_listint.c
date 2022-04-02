#include "lists.h"

/**
 * reverse_listint - Function that prints in reverse
 * @head: Header from list
 * Return: Pointer to the first node
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL, *next = NULL;

	if (head)
	{
		while (*head)
		{
			next = (*head)->next;
			prev = (*head)->next;
			prev = *head;
			*head = next;
		}
		*head = prev;
		return (*head);
	}
	return (NULL);
}
