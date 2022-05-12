#include "lists.h"
/**
 * free_dlistint - Function that frees the dlistint_t
 * @head: Header from the list
 * Return: Success!
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *next;

	while (head != NULL)
	{
		next = head->next;
		free(head);
		head = next;
	}
}