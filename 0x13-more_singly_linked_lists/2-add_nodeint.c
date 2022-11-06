#include "lists.h"

/**
 * add_nodeint - function that returns the number of elements
 * in a linked list listint_t list
 * @head: pointer to the address of head of list_t
 * @n: integer data of new node
 * Return: number of elements in a linked listint_t list
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *node;

	node = malloc(sizeof(listint_t));
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
