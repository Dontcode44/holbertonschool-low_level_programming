#include "hash_tables.h"
/**
 * hash_table_get - Function that retrives a value from key
 * @ht: Hash table
 * @key: Key const char
 * Return: Success!!
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	char *thkey;
	hash_node_t *tmp = NULL;
	unsigned int head = 0;

	if (ht == NULL)
		return (NULL);

	thkey = strdup(key);
	head = key_index((unsigned char *)key, ht->size);
	tmp = ht->array[head];

	while (tmp)
	{
		if (strcmp(tmp->key, thkey) == 0)
			break;
		tmp = tmp->next;
	}
	free(thkey);
	return (tmp->value);
}
