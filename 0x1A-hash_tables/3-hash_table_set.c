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
	unsigned long int index;
	hash_node_t *tmp;
	char *k, *v;

	if (ht == NULL || key == NULL || *key == '\0')
		return (0);

	index = key_index((unsigned char *)key, ht->size);
	tmp = ht->array[index];
	k = strdup(key);
	v = strdup(value);
	if (k == NULL || strcmp(v, value) != 0)
		return (0);

	while (tmp != NULL)
	{
		if (strcmp(tmp->key, k) == 0)
		{
			tmp->value = v;
			return (1);
		}
		tmp = tmp->next;
	}
	tmp->key = k;
	tmp->value = v;
	tmp->next = ht->array[index];
	ht->array[index] = tmp;

	return (1);
}
