#include "function_pointers.h"

/**
 * array_iterator-a function that executes a function
 * given as a parameter on each element of an array
 * @size:size of the array
 * @action:pointer to the function you need to use
 * @array:input array
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array && action)
		while (size--)
			action(*(array++));
}
