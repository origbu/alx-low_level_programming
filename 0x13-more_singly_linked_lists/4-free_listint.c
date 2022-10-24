#include "lists.h"
/**
 * free_listint- a function that frees a listint_t list
 * @head:head of list
 */
void free_listint(listint_t *head)
{
	listint_t *tmp;

	if (!head)
		return;
	while (head)
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}
	head = NULL;
}
