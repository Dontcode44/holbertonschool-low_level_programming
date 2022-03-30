#include "lists.h"

/**
 * free_list - Function thats make free the list
 * @head: Head of the list
 */
void free_list(list_t *head)
{
	while (head != NULL)
	{
		free(head->str);
		free(head);
		head = head->next;
	}
}
