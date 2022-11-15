#include "lists.h"

/**
 * print_dlistint - a function that prints all the elements of a dlistint_t
 * @h: head
 * Return: the number of elements in linked dlistint_t list
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t nodecount = 0;

	while (h)
	{
		h = h->next;
		nodecount++;
	}
	return (nodecount);
}