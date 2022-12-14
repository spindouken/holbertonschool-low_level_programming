#include "lists.h"

/**
 * sum_dlistint - function that returns the sum of
 * all the data (n) of a dlistint_t linked list
 * @head: head
 * Return: the sum of all the data (n) of dlistint_t linked list
 * if the list is empty, return 0
 */

int sum_dlistint(dlistint_t *head)
{
	int datasumoflistnodes = 0;

	while (head != NULL)
	{
		datasumoflistnodes += head->n;
		head = head->next;
	}
	return (datasumoflistnodes);
}
