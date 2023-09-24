#include "hash_tables.h"

/**
 * hash_table_set - Adds an element to hash table
 *
 * @ht: hash table
 * @key: key must not be empty
 * @value: value could be empty
 *
 * Description: in case of collision add node to the beggining of linked list
 * Return: 1 if succed, 0 if failure
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index, size;
	hash_node_t *tmp;

	if (ht == NULL || key == NULL || *key == '\0')
		return (0);

	size = ht->size;
	index = key_index((unsigned char *)key, size);
	tmp = ht->array[index];

	while (tmp != NULL)
	{
		if (tmp->key == key)
			return (0);
		tmp = tmp->next;
	}
	tmp->key = strdup(key);
	tmp->value = strdup(value);
	tmp->next = ht->array[index];
	ht->array[index] = tmp;

	return (1);
}
