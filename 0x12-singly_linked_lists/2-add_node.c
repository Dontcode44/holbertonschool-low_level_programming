#include "lists.h"

/**
 * add_node - Function that adds new node
 * @head: Head of the list
 * @str: Type string variable pointer 
 * Return: New node element
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *bandido;
	int a = 0;

	bandido = malloc(sizeof(list_t));

	if (bandido == NULL)
	{
		free(bandido);
		return(NULL);
	}
	for (; str[a]; a++);
	bandido->str = strdup(str);
	bandido->len = a;
	bandido->next = *head;
	*head = bandido;

	return (bandido);
}
