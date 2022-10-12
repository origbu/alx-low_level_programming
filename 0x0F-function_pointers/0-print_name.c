#include "function_pointers.h"

/**
 * print_name-a function that prints name
 * @name:input name
 * @f:functioin pointer
 */

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
