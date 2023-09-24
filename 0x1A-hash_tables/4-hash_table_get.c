#include "hash_tables.h"

/**
 * hash_table_get - get value from a key
 *
 * @ht: hash table
 * @key: the key of key/value
 *
 * Return: Value, Otherwide NULL
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index, i;
	hash_node_t *node;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	node = ht->array[index];
	for (i = index; node; i++)
	{
		if (strcmp(ht->array[i]->key, key) == 0)
		{
			return (ht->array[i]->value);
		}
		node = node->next;
	}
	return (NULL);
}
