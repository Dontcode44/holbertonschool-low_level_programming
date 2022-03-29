#include "lists.h"

/**
 * add_node_end - Function that add node an the end
 * @str: Type string variable
 * @head:Header
 * Return: End of the list
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *node;
	list_t *x;

	node = malloc(sizeof(list_t));
	if (node == NULL)
	{
		return (NULL);
	}
	node->str = strdup(str);
	node->len = strlen(str);
	node->next = NULL;

	if (*head == NULL)
	{
		*head = node;
	}
	else
	{
		x = *head;

		while (x->next != NULL)
		{
			x = x->next;
		}
		x->next = node;
	}
	return (node);
}
