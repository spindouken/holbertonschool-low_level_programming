#include "lists.h"

/**
 * add_nodeint_end - function that adds a new node at the end of a listint_t list
 * @head: pointer to the address of head of list_t
 * @n: integer data of new node
 * Return: the address of the new element, or NULL if it failed
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *first, *last;

	first = malloc(sizeof(listint_t));
	if (first == NULL)
		return (NULL);

	if (first != NULL)
	{
		first->n = n;
		first->next = NULL;
	}
	if (*head == NULL)
		*head = first;
	else
	{
		last = *head;
		while (last->next != NULL)
			last = last->next;
		last->next = first;
	}
	return (*head);
}
