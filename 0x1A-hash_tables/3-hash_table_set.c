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
	unsigned int head;
	hash_node_t *hash_node;

	if (ht == NULL)
		return (0);
	if (key == NULL || *key == '\0')
		return (0);

	head = key_index((unsigned char *)key, ht->size);
	if (ht->array[head] != NULL)
	{
		if (strcmp(key, ht->array[head]->key) == 0)
		{
			ht->array[head]->value = strdup(value);
			return (1);
		}
	}

	if (ht->array[head] == NULL)
	{
		hash_node = malloc(sizeof(hash_node_t *));
		if (hash_node == NULL)
			return (0);
		hash_node->next = NULL;
		hash_node->key = strdup(key);
		hash_node->value = strdup(value);
		ht->array[head] = hash_node;
	}
	else
	{
		hash_node = malloc(sizeof(hash_node_t *));

		hash_node->key = strdup(key);
		hash_node->value = strdup(value);
		hash_node->next = ht->array[head];
		ht->array[head] = hash_node;
	}
	return (1);
}
