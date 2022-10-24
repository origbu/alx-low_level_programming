#include "lists.h"
/**
 * add_nodeint-a function that adds a new node at
 * the beginning of a listint_t list
 * @head:double pointer to the head of the list
 * @n:integer to be added
 *
 * Return:address of the new element,
 * or NULL if it failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t newNode;

	newNode = malloc(sizeof(listint_t));

	if (newNode == NULL || head =NULL)
		return (NULL);
	
	newNode->n = n;
	newNode->next = NULL;
	if (*head)
		newNode->next = *head;
	*head = newNode;
	return (newNode);
}
