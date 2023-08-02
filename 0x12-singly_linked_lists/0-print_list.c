#include <stdio.h>
#include "lists.h"

/**
 * print_list -function that prints all the elements of a list_t list
 * @h: list
 *
 * Return: int
 */
size_t print_list(const list_t *h)
{
	int c = 0;

	if (h)
	{
		while (h->next)
		{
			if (h->str)
				printf("[%d] %s\n", h->len, h->str);
			else
				printf("[%d] %s\n", 0, "(nil)");
			c++;
			h = h->next;
		}
		if (h->str)
			printf("[%d] %s\n", h->len, h->str);
		else
			printf("[%d] %s\n", 0, "(nil)");
		c++;
	}
	return (c);
}

