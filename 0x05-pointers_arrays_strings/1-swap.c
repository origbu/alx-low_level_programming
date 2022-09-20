/**
 * swap_int-a function that swaps the values of two integers
 * @a:integer variable
 * @b:integer variable
 *
 * Return:Void
 */
#include "main.h"

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
