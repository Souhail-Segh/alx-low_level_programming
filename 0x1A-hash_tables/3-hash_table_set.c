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
	unsigned long int index, try, i;
	hash_node_t *new;
	char *k, *v;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);

	index = key_index((unsigned char *)key, ht->size);
	k = strdup(key);
	v = strdup(value);
	if (k == NULL || strcmp(v, value) != 0)
		return (0);

	for (i = 0; i < ht->size; i++)
	{
		try = (i + index) % ht->size;
		if (strcmp(ht->array[try]->key, k) == 0)
		{
			if (strcmp(ht->array[try]->value, v) != 0)
			{
				free(ht->array[try]->value);
				ht->array[try]->value = v;
				return (1);
			}
		}
	}

	new = malloc(sizeof(hash_node_t));
	if (new == NULL)
	{
		free(v);
		free(k);
		return (0);
	}
	new->key = k;
	new->value = v;
	ht->array[index] = new;
	return (1);
}
