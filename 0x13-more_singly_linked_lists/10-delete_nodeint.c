#include "lists.h"

/**
 * delete_nodeint_at_index - function that deletes the node at index of listint_t linked list
 * @head: pointer to the address of head of list_t
 * @index: index of the node that should be deleted
 * Return: 1 on success, -1 on failure
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	list_t *freelord;

	while (head)
	{
		freelord = head->next;
		free(head->str);
		free(head);
		head = freelord;
	}
}
