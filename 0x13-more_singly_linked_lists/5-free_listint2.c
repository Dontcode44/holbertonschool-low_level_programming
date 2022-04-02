#include "lists.h"

/**
 * free_listint2 - Function that frees a list
 * @head: Header from list
 *Return: Success!
 */
void free_listint2(listint_t **head)
{
	listint_t *set;

	if (head == NULL)
	{
		return;
	}
	while (*head)
	{
		set = (*head)->next;
		free(*head);
		*head = set;
	}
	*head = NULL;
}
