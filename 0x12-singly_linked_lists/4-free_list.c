#include "lists.h"
/**
 * free_list-a function that frees a list_t list
 * @head:head of list_t
 */
void free_list(list_t *head)
{
	list_t *current = head;
	list_t *next;

	while (current)
	{
		current = current->next;
		free(current->str);
		free(current);
		current = next;
	}
	head = NULL;
}
