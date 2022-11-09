#include "lists.h"

/**
 * delete_nodeint_at_index - function that deletes the node at index of listint_t linked list
 * @head: pointer to the address of head of list_t
 * @index: index of the node that should be deleted
 * Return: 1 on success, -1 on failure
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *node, *delete;
	unsigned int x;

	delete = *head;

	if (delete == NULL)
		return (-1);
	if (index == 0)
	{
		*head = (*head)->next;
		free(delete);
		return (1);
	}
	for (x = 0; x < (index - 1); delete = delete->next, x++)
	{
		if (delete == NULL || delete->next == NULL)
			return (-1);
	}
	node = delete->next;
	delete->next = node->next;
	free(node);

	return (1);
}
