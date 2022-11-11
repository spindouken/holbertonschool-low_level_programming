#include "lists.h"

/**
 * free_dlistint - function that returns the nth node of dlistint_t linked list
 * @head: head
 * @index: index of the node, starting from 0
 * Return: the nth node of dlistint_t linked list
 * if the node does not exist, return NULL
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)