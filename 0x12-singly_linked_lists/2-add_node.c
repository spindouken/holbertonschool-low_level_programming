#include "lists.h"
#include <stdio.h>
#include <string.h>

/**
 * add_node - function that adds a new node to the head of list_t
 * @head: pointer to list_t list head
 * @str: string to add to list
 * Return: the address of the new element, or NULL if it failed
*/

list_t *add_node(list_t **head, const char *str)
{
	list_t *node;
	int len = 0;

	node = malloc(sizeof(list_t));
	if (node == NULL)
		return (NULL);

	while (str[len] != '\0')
		len++;

	while (node != NULL)
	{
		node->str = strdup(str);
		if (node->str == NULL)
		{
			free(node);
			return(NULL);
		}
		node->len = len;
		node->next = *head;
	}
	*head = node;
	return(node);
}