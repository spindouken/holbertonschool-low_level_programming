#include "lists.h"
#include <stdio.h>

/**
 * add_nodeint - function that returns the number of elements in a linked list listint_t list
 * @h: pointer to head of list_t
 * Return: number of elements in a linked listint_t list
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	list_t *node;

	node = malloc(sizeof(list_t));
	if (node == NULL)
		return (NULL);

	if (node != NULL)
	{
		node->n = n;
		node->next = *head;
	}
	*head = node;
	return (node);
}
