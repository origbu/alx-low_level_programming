#include "function_pointers.h"

/**
 * int_index-a function that searches for an integer.
 * @size:number of elements in the array array
 * @cmp:pointer to the function to be used to compare values
 * @array:input arrray
 *
 * Return:If size <= 0, return -1
 * If no element matches, return -1
 * otherwise index of the first element if sucessful
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size > 0 && cmp && size && array)
		for (i = 0; i <= size; i++)
			if (cmp(array[i]))
				return (i);
	return (-1);
}
