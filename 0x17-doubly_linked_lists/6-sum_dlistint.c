#include "lists.h"

/**
 * sum_dlistint - Function that return the sum of all data
 * @head: Header from list
 * Return: Success!
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}