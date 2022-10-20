#include "list.h"

/**
 * print_list-a function that prints all the elements of a list_t list
 * @h:pointer to list_t
 *
 * Return:number of nodes
 */

size_t print_list(const list_t *h)
{
	register int len = 0;

	while (h)
	{
		if (!h->str)
			printf("[%d] (nil)\n");
		printf("[%i] %s\n", h->len, h->str);
		h = h->next;
		len++;
	}
	return (len);
}
