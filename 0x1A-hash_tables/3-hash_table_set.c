#include "hash_tables.h"

/**
 * hash_table_set - Adds an element to the hash table
 * @ht: The hash table on which an element is to be added
 * @key: The key
 * @value: The value associated with the key
 *
 * Return: 1 if successful, 0 otherwise.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new_node, *tmp;
	unsigned long int i;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);

	i = key_index((const unsigned char *)key, ht->size);

	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
		return (0);

	new_node->key = strdup(key);
	new_node->value = strdup(value);
	new_node->next = NULL;

	if (ht->array[i] == NULL)
		ht->array[i] = new_node;
	else
	{
		tmp = ht->array[i];
		if (strcmp(key, tmp->key) == 0)
			tmp->value = strdup(value);
		else
		{
			new_node->next = tmp;
			ht->array[i] = new_node;
		}
	}
	return (1);
}
