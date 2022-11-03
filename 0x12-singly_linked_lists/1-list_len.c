#include "lists.h"
#include <stdio.h>

/**
 * list_len - function that returns the number of elements in a linked list
 * @h: pointer to list_t list
 * Return: the number of elements in linked list
*/

size_t list_len(const list_t *h)
{
	size_t elements = 0;

	while (h != NULL)
	{
	h = h->next;
	elements++;
	}
	return (elements);
}
