#include "hash_tables.h"
/**
 * hash_table_create - Function that create new hash table
 * @size: Unsigned long int to the size
 * Return: Success!!
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_table = NULL;
	unsigned long int head;

	new_table = malloc(sizeof(hash_table_t));
	if (new_table == NULL)
		return (NULL);

	new_table->array = malloc(sizeof(hash_node_t *) * size);
	if (new_table->array == NULL)
	{
		free(new_table);
		return (NULL);
	}
	for (head = 0; head < size; head++)
		new_table->array[head] = NULL;
	new_table->size = size;

	return (new_table);
}
