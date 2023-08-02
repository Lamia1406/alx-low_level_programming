#include <stdio.h>
#include "lists.h"

/**
 * listint_len -function that returns the number of elements
 *			of a listint_t list
 * @h: list
 *
 * Return: size_t
 */
size_t listint_len(const listint_t *h)
{
	int c = 0;

	if (h)
	{
		while (h->next)
		{
			c++;
			h = h->next;
		}
		c++;
	}
	return (c);
}

