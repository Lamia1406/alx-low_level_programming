#include "lists.h"
/**
 * sum_dlistint - returns the sum of all the data (n)
 *				of a dlistint_t linked list.
 * @head: Pointer to the head of the doubly linked list.
 * Return: int (sum of the data)
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
