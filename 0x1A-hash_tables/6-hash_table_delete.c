#include "hash_tables.h"
/**
 * hash_table_delete - Function that deletes hash table
 *@ht: Hash table
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned int position;
	hash_node_t *tmp;

	if (ht == NULL)
		return;
	for (position = 0; position < ht->size; position++)
	{
		while (ht->array[position] != NULL)
		{
			tmp = ht->array[position]->next;
			free(ht->array[position]->key);
			free(ht->array[position]->value);
			free(ht->array[position]);
			ht->array[position] = tmp;
		}
		free(ht->array[position]);
	}
	free(ht->array);
	free(ht);
}
