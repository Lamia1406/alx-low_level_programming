#include "lists.h"
#include <stdio.h>
/**
 * print_dlistint - prints all the elements of a dlistint_t list
 * @h: Pointer to the head of the doubly linked list.
 * Return: The number of nodes in the list (size_t).
 */
size_t print_dlistint(const dlistint_t *h)
{
	int c = 0;

	while (h)
	{
		printf("%d\n", h->n);
		c++;
		h = h->next;
	}
	return (c);
}
