#include <stdio.h>
#include "lists.h"

/**
 * print_listint -function that prints all the elements of a listint_t list
 * @h: list
 *
 * Return: int
 */
size_t print_listint(const listint_t *h)
{
	int c = 0;

	if (h)
	{
		while (h->next)
		{
			if (h->n)
				printf("%d\n", h->n);
			else
				printf("%d\n", 0);
			c++;
			h = h->next;
		}
		if (h->n)
			printf("%d\n", h->n);
		else
			printf("%d\n", 0);
		c++;
	}
	return (c);
}

