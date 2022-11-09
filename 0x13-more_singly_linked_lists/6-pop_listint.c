#include "lists.h"

/**
 * pop_listint - deletes the head node of listint_t linked list,
 * and returns the head node's data (n)
 * @head: pointer to the address of head of list_t
 * Return: head node's data (n), if linked list is empty return 0
 */

int pop_listint(listint_t **head)
{
	listint_t *freelord;
	int data;

	if (*head == NULL)
		return (0);

	freelord = *head;
	data = (*head)->n;
	*head = (*head)->next;

	free(freelord);
	return (data);
}
