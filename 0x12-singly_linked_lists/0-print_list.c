#include "list.h"

/**
 * print_list-a function that prints all the elements of a list_t list
 * @h:pointer to list_t
 *
 * Return:number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t nelen;

	nelen = 0;
	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[%d] (%s)\n", 0, "(nil)");
		else
			printf("[%d] (%s)\n", h->len, h->str);
		h = h->next;
		nelen++;
	}
	return (nelen);
}
