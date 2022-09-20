/**
 * print_array-a function that prints n elements of an array of integers
 * followed by a new line
 * @a:pointer-variable
 * @n:number of element to be printed
 */
#include "main.h"
#include "stdio.h"

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < (n - 1); i++)
	{
		printf("%d", a[i]);
	if (i != (n - 1))
	{
	printf(",");
	printf(" ");
	}
	}
	printf("\n");
}
