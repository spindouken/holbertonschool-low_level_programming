#include "lists.h"
#include <stdio.h>

/**
 * print_list - print all the elements of list_t
 * @h: pointer to list_t struct
 * Return: the number of nodes
*/

size_t print_list(const list_t *h)
{
	size_t x = 0;

	while (h)
	{
		if (h->str == NULL)
			printf("[%d] %s\n", 0, "(nil)");
		else
			printf("[%d] %s\n", h->len, h->str);
		x++;
		h = h->next;
	}
	return (x);
}
