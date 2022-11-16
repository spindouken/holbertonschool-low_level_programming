#include "lists.h"

/**
 * print_dlistint_backward - function that prints all
 * the elements of a dlistint_t list backward
 * @h: head
 * Return: the number of nodes
 */

size_t print_dlistint_backward(const dlistint_t *h)
{
	size_t count;

	if (h == NULL)
	{
		return (0);
	}
	while (h->next)
	{
		h = h->next;
	}
	for (count = 0; h; count++, h = h->prev)
	{
		printf("%i\n", h->n);
	}
	return (count);
}
