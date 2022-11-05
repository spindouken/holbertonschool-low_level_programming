#include "lists.h"
#include <stdio.h>

/**
 * lintint_len - function that returns the number of elements in a linked list listint_t list
 * @h: pointer to head of list_t
 * Return: number of elements in a linked listint_t list
 */

size_t listint_len(const listint_t *h)
{
	size_t elements = 0;

	while (h != NULL)
	{
	h = h->next;
	elements++;
	}
	return (elements);
}
