#include "lists.h"
#include <stdio.h>
/**
 * dlistint_len - returns the number of elements in a linked dlistint_t list.
 * @h: Pointer to the head of the doubly linked list.
 * Return: The number of nodes in the list (size_t).
 */
size_t dlistint_len(const dlistint_t *h)
{
	int c = 0;

	while (h)
	{
		c++;
		h = h->next;
	}
	return (c);
}
