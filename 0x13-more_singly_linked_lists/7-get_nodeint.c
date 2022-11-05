#include "lists.h"

/**
 * get_nodeint_at_index - function that returns the nth node
 * of listint_t linked list
 * @head: pointer to the address of head of list_t
 * @index: the index of the node, starting at 0
 * Return: the nth node, NULL if node does not exist
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int nodesearch;

	for (nodesearch = 0; nodesearch < index; nodesearch++)
	{
		if (head == NULL)
			return (NULL);

		head = head->next;
	}
	return (head);
}
