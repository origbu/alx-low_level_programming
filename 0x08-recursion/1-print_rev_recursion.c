/**
 * _print_rev_recursion-a function that prints a string in reverse
 * @s:string to be printed in reverse
 */

#include "main.h"

void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	_print_rev_recursion(1 + s);
	_putchar(s);
}
