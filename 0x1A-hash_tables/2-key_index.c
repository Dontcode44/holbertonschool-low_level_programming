#include "hash_tables.h"
/**
 * key_index - Function that gives the index from key
 * @key: Key from table
 * @size: Unsigned long int of size
 * Return: Success!
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	if (key == NULL || size == NULL)
		return (0);

	return (hash_djb2(key) % size);
}
