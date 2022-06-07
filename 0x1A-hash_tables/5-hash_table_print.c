#include "hash_tables.h"
/**
 * hash_table_print - Function that prints
 *@ht: Hash table
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	char *div;
	hash_node_t *tmp;

	if (ht == NULL)
		return;
	printf("{");
	div = "";
	for (i = 0; i < ht->size; i++)
	{
		tmp = ht->array[i];
		while (tmp != NULL)
		{
			printf("%s '%s': '%s'", div, tmp->key, tmp->value);
			div = ", ";
			tmp = tmp->next;
		}
		}
	printf("}\n");
}
