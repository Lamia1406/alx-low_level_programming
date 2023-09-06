#include "lists.h"
#include <stdlib.h>

/**
 * free_list - function that frees the memory allocated for a linked list.
 * @head: Pointer to the head of the linked list.
 */
void free_list(list_t *head)
{
	list_t *h;

	while (head)
	{
		h = head->next;
		free(head);
		head = h;
	}
}
