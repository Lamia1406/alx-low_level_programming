#include "lists.h"
#include <stdlib.h>
/**
 * add_nodeint_end -function that adds a new node to the end of the list
 * @head: A pointer to a pointer to the head of the list.
 * @n: The num to be added to the new node.
 * Return: list_t
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node = malloc(sizeof(listint_t));
	listint_t *current;

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;
	if (*head == NULL)
		*head = new_node;
	else
	{
		current = *head;
		while (current->next != NULL)
			current = current->next;
		current->next = new_node;
	}
	return (new_node);
}
