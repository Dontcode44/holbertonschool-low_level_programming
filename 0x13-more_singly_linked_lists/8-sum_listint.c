#include "lists.h"

/**
 * sum_listint - Function that returns sum all data
 * @head: Header from list
 * Return: Sum or 0
 */
int sum_listint(listint_t *head)
{
	unsigned int sum = 0;

	if (head == NULL)
	{
		return (0);
	}
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
