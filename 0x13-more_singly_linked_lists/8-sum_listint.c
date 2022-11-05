#include "lists.h"

/**
 * sum_listint - function that returns the sum of all the
 * data (n) of a listint_t linked list
 * @head: pointer to the address of head of list_t
 * Return: sum of all the data (n) of listint_t, 0 if list is empty
 */

int sum_listint(listint_t *head)
{
	unsigned int datasum = 0;

	while (head)
	{
		datasum += head->n;
		head = head->next;
	}
	return (datasum);
}
