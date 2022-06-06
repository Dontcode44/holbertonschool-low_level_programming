#include "hash_tables.h"
/**
 * hash_table_set - Create a new node in hash
 * @ht: Pointer
 * @key: Key
 * @value: Value const char
 * Return: Success!!
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int head;
	hash_node_t *tmp;
	hash_node_t *new_node = malloc(sizeof(hash_node_t));

	if (ht == NULL || key == '\0' || *key == '\0')
		return (0);
	if (new_node == NULL)
		return (0);
	new_node->key = strdup(key);
	new_node->value = strdup(value);
	head = key_index((unsigned char *)key, ht->size);
	if (ht->array[head] != NULL)
	{
		tmp = ht->array[head];
		while (tmp != NULL)
		{
			if (strcmp(temp->, new_node->key) == 0)
				break;
			tmp = tmp->next;
		}
		if (tmp == NULL)
		{
			new_node->next = ht->array[head];
			ht->array[head] = new_node;
		}
		else
		{
			free(tmp->value);
			tmp->value = strdup(new_node->value);
			free(new_node->value);
			free(new_node->key);
			free(new_node);
		}
	}
	else
	{
		new_node->next = NULL;
		ht->array[head] = new_node;
	}
	return (1);
}
