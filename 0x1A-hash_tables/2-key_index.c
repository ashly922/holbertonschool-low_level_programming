#include "hash_tables.h"

/**
 * key_index - gets the index of a key
 * @key: the key in question
 * @size: size of the array of the hash table
 *
 * Return: the index at which the value pair should be stored
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	if (!key || size == 0)
		return (0);
	return (hash_djb2(key) % size);
}