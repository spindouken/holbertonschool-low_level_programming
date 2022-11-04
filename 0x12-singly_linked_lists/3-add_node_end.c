#include "lists.h"
#include <stdio.h>
#include <string.h>

/**
 * add_node_end - function that adds a new node to the end of list_t
 * @head: pointer to list head
 * @str: pointer to string to add
 * Return: the address of the new element, or NULL if it failed
*/

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *first, *last;
	int len = 0;

	first = malloc(sizeof(list_t));
	if (first == NULL)
		return (NULL);

	while (str[len] != '\0')
		len++;

	if (first != NULL)
	{
		first->str = strdup(str);
		first->len = len;
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
