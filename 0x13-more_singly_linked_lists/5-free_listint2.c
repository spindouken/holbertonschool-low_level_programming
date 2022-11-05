#include "lists.h"

/**
 * free_listint2 - frees a listint_t list, sets head to NULL
 * @head: pointer to the address of head of list_t
 * Return: void
 */

void free_listint2(listint_t **head)
{
	listint_t *freelord;

	while (*head)
	{
		freelord = (*head)->next;
		free(*head);
		*head = freelord;
	}
	head = NULL;
}
