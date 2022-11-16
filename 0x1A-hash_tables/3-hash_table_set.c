#include "hash_tables.h"

/**
 * hash_table_set - function that adds an element to the hash table
 * @ht: hash table
 * @key: key
 * @value: value associated with the key
 * Return: 1 if it succeeded, 0 otherwise
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *node, *copy;

	if (ht == NULL || key == NULL)
		return (0);
	index = key_index((const unsigned char *)key, ht->size);
	copy = ht->array[index];
	while (copy != NULL)
	{
		if (strcmp(copy->key, key) == 0)
		{
			free(copy->value);
			copy->value = strdup(value);
			if (copy->value == NULL)
				return (0);
			return (1);
		}
		copy = copy->next;
	}
	node = malloc(sizeof(hash_node_t));
	if (node == NULL)
		return (0);
	node->key = strdup(key);
	node->value = strdup(value);
	if (node->value == NULL)
		return (0);
	node->next = ht->array[index];
	ht->array[index] = node;
	return (1);
}
