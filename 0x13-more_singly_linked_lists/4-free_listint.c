#include "lists.h"

/**
 * free_listint - frees a listint_t list
 * @head: pointer to the address of head of list_t
 * Return: void
 */

void free_listint(listint_t *head)
{
	listint_t *freelord;

	while (head)
	{
		freelord = head->next;
		free(head);
		head = freelord;
	}
}
