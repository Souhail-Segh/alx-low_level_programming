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
	unsigned long int index, i;
	hash_node_t *new;
	char *k, *v;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);

	index = key_index((unsigned char *)key, ht->size);
	v = strdup(value);
	if (v == NULL)
		return (0);

	for (i = 0; ht->array[i]; i++)
	{
		if (strcmp(ht->array[i]->key, key) == 0)
		{
			free(ht->array[i]->value);
			ht->array[i]->value = v;
			return (1);
		}
	}

	new = malloc(sizeof(hash_node_t));
	if (new == NULL)
	{
		free(v);
		return (0);
	}
	k = strdup(key);
	if (k == NULL)
	{
		free(new);
		return (0);
	}
	new->key = k;
	new->value = v;
	ht->array[index] = new;
	return (1);
}
