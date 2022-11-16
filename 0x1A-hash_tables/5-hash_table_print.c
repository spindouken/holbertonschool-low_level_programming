#include "hash_tables.h"
/**
 * hash_table_print - function that prints a hash table
 * @ht: hash table
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int x, y = 0;
	hash_node_t *node;

	if (ht == NULL)
		return;
	printf("{");
	for (x = 0; x < ht->size; x++)
	{
		if (ht->array[x] != NULL)
		{
			if (y == 1)
				printf(", ");
			node = ht->array[x];
			while (node != NULL)
			{
				printf("'%s': '%s'", node->key, node->value);
				node = node->next;
				if (node != NULL)
					printf(", ");
			}
			y = 1;
		}
	}
	printf("}\n");
}
