#include <stdio.h>
#include "lists.h"
#include <string.h>
#include <stdlib.h>
/**
 * add_node -function that adds a new node to the beginning of the list
 * @head: A pointer to a pointer to the head of the list.
 * @str: The string to be added to the new node.
 * Return: list_t
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);
	new_node->len = strlen(str);
	new_node->next = *head;
	*head = new_node;
	return (new_node);
}
