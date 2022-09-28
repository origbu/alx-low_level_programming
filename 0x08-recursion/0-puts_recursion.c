/**
 * _puts_recursion-a function that prints a string
 * followed by a new line
 * @s:string to be printed
 */
#include "main.h"

void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
	_putchar(*s);
		s++;
	}
	if (s == '\0')
	{
		_putchar('\n');
		_puts_recursion(s);
	}
}
