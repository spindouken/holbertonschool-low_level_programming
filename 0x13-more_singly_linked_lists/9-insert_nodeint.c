#include "lists.h"

/**
 * insert_nodeint_at_index - function that returns the sum of all the data (n) of a listint_t linked list
 * @head: pointer to the address of head of list_t
 * @idx: index of the list where the new node should be added
 * @n: integer data of new node
 * Return: address of the new node, or NULL on failure
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	list_t *node;

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
