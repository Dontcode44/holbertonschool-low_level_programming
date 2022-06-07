#include "hash_tables.h"
/**
 * hash_table_get - Function that retrives a value from key
 * @ht: Hash table
 * @key: Key const char
 * Return: Success!!
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *hash;
	unsigned long int head;

	if (ht == NULL || key == NULL)
		return (NULL);
	head = key_index((unsigned char *)key, ht->size);
	if (ht->array[head] == NULL)
		return (NULL);

	if (strcmp(ht->array[head]->key, key) == 0)
		return (ht->array[index]->value);
	hash = ht->array[head];
	while (hash != NULL)
	{
		if (strcmp(hash->key, key) == 0)
			return (hash->value);
		hash = hash->next;
	}
	return (NULL);
}
