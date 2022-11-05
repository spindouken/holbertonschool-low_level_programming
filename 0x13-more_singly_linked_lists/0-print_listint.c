#include "lists.h"
#include <stdio.h>

/**
 * print_listint - function that prints all the elements of a lintint_t list
 * @h: 
 * Return: the number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t nodecount = 0;

	while (h)
	{
		printf("%d\n", h->n);
		nodecount++;
		h = h->next;
	}
	return (nodecount);
}
