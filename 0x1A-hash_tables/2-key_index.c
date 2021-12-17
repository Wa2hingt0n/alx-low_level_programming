#include "hash_tables.h"

/**
 * key_index - Gives the index of a key
 * @key: The key whose index is to be obtained
 * @size: Size of the array of the hash table
 *
 * Return: The index at which the key/value pair shouls be stored
 *         in the array of the hash table
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash;

	hash = hash_djb2(key);
	return (hash % size);
}
