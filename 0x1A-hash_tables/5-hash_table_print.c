#include "hash_tables.h"

/**
 * hash_table_print - print a hash table
 *
 * @ht: a hash table
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *node;
	unsigned long int i, flag_comma = 0;

	if (ht == NULL)
	{
		printf("{}");
		return;
	}
	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		node = ht->array[i];
		if (flag_comma == 1 && node)
			printf(", ");
		while (node)
		{
			printf("'%s': '%s'",
			       ht->array[i]->key, ht->array[i]->value);
			node = node->next;
			if (node != NULL)
				printf(", ");
		}
		flag_comma = 1;
	}
	printf("}\n");
}
