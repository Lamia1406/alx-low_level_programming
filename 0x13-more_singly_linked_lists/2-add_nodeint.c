#include "lists.h"
#include <stdlib.h>
/**
 * add_nodeint -function that adds a new node to the beginning of the list
 * @head: A pointer to a pointer to the head of the list.
 * @n: The num to be added to the new node.
 * Return: list_t
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = *head;
	*head = new_node;
	return (new_node);
}
