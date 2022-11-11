#include "lists.h"

/**
 * delete_dnodeint_at_index - function that deletes the node at index
 * of a dlistint_t linked list
 * @head: head
 * @index: index of the node that should be detected, starting from 0
 * Return: 1 on success, -1 on failure
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)