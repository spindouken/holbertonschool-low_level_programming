#include "lists.h"

/**
 * add_dnodeint - adds a new node at the end of a dlistint_t list
 * @head: head
 * @n: integer variable
 * Return: the address of the new element, or NULL on failure
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)