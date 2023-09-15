#include "lists.h"
#include <stdlib.h>
/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list.
 * @head: Pointer to the head of the doubly linked list.
 * @index: Index of the node, starting from 0
 * Return: The nth node of the list or NULL if it does not exist
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int current = 0;

	while (head)
	{
		if (current == index)
		{
			return (head);
		}
		else
		{
			head = head->next;
			current++;
		}
	}
	if (index > current)
		return (NULL);
	return (head);
}
