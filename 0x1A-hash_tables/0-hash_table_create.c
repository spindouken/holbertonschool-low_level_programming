#include "hash_tables.h"

/**
 * hash_table_create - function that creates hash table
 * @size: size of array
 * Return: pointer to new hash table or NULL if something went wrong
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *firsthashtable;

	firsthashtable = malloc(sizeof(hash_table_t));
	if (firsthashtable == NULL)
		return (NULL);

	firsthashtable->array = malloc(sizeof(hash_node_t *) * size);
	if (firsthashtable->array == NULL)
		return (NULL);
	firsthashtable->size = size;

	return (firsthashtable);
}
