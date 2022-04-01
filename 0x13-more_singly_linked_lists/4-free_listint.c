#include "lists.h"

/**
 * free_listint - Function that free's a list
 * @head: Header from list
 * Return: Success!
 */
void free_listint(listint_t *head)
{
	listint_t *fre;

	while (head)
	{
		fre = head;
		head = head->next;
		free(fre);
	}
	free(head);
}
