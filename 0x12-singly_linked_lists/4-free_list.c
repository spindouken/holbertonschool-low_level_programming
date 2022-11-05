#include "lists.h"
#include <stdio.h>

/**
 * free_list - function that frees list_t
 * @head: pointer to head of linked list
 * Return: void
*/

void free_list(list_t *head)
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
