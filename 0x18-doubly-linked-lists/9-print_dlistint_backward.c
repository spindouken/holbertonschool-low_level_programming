#include "lists.h"

/**
 * print_dlistint_backward - function that prints all 
 * the elements of a dlistint_t list backward
 * @head: head
 * Return: the number of nodes
 */

size_t print_dlistint_backward(const dlistint_t *h)
{
	size_t nodeiterator = 0, nodecount;

	if (h != NULL)
		return (nodeiterator);
	
	while (h->next)
	{
		h = h->next;
		nodeiterator++;
	}
	nodecount = nodeiterator;
	for (; nodeiterator > 0; nodeiterator--)
	{
		printf("%d\n", h->n);
		h = h->prev;
	}
	printf("%d\n", h->n);
	nodecount++;
	return (nodecount);
}
