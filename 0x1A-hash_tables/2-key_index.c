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
	unsigned long int hash_val;

	hash_val = hash_djb2(key);
	return (hash_val % size);
}
