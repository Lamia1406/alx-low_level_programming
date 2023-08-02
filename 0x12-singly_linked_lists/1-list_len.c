#include <stdio.h>
#include "lists.h"

/**
 * list_len -function that returns the number of elements of a list_t list
 * @h: list
 *
 * Return: size_t
 */
size_t list_len(const list_t *h)
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

