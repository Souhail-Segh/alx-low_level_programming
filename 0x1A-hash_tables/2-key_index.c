#include "hash_tables.h"
/**
 * key_index - get the index of a key
 *
 * @key: the key to search for its index
 * @size: the size of the array of the hash table
 *
 * Return: Returns the index at which the key/value pair \
 *         should be stored in the array of the hash table
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index;
	unsigned long int hash;

	hash = hash_djb2(key);
	index = hash % size;

	return (index);
}
