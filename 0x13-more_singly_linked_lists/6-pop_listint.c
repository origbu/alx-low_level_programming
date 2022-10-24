#include "lists.h"
/**
 * pop_listint-a function that deletes
 * the head node of a listint_t linked list,
 * and returns the head node’s data (n).
 * @head:double pointer to head of lists
 *
 * Return:0 if linked list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *current;
	int res;

	if (!(*head) || !head)
		return (0);
	current = *head;
	res = current->n;
	*head = (*head)->next;
	free(current);
	return (res);
}
