#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array-a function that creates an array of chars
 * and initializes it with a specific char
 * @size:size of the array
 * @c:char to initialize arrar with
 *
 * Return:pointr to array, otherwise NULL
 */

char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}
	arr = malloc(size * sizeof(char));

	if (arr == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		arr[i] = c;
	}
	return (arr);
}
