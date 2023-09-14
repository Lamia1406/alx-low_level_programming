#include "lists.h"
#include <stdlib.h>
/**
 * add_dnodeint - adds a new node at the beginning of a dlistint_t list.
 * @head: A pointer to a pointer to the head of the doubly linked list.
 * @n: The integer data to be stored in the new node
 *
 * Return: A pointer to the newly created node,
 *			or NULL if memory allocation fails.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *node;

	node = malloc(sizeof(dlistint_t));
	if (node == NULL)
		return (NULL);
	node->n = n;
	node->prev = NULL;
	if (*head == NULL)
	{
		node->next = NULL;
		*head = node;
		return (node);
	}
	node->next = *head;
	*head = node;
	return (node);
}
