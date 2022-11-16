#include "hash_tables.h"

/**
 * hash_table_delete - delete a hash table
 * @ht: hash table
 */

void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *temp;
	unsigned long int x;

	if (ht == NULL)
		return;
	for (x = 0; x < ht->size; ++x)
	{
		if (ht->array[x] != NULL)
		{
			while (ht->array[x] != NULL)
			{
				temp = ht->array[x]->next;
				free(ht->array[x]->key);
				free(ht->array[x]->value);
				free(ht->array[x]);
				ht->array[x] = temp;
			}
			free(ht->array[x]);
		}
	}
	free(ht->array);
	free(ht);
}
