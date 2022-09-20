/**
 * print_rev-a function that prints a string, in reverse
 * followed by a new line
 * @s:string input
 * f_count:first counter to the end
 * b_count:count back
 *
 */
#include "main.h"

void print_rev(char *s)
{
	int f_count = 0;
	int i, b_count;

	for (i = 0; s[i] != '\0'; i++)
	{
		f_count++;
	}
	for (b_count = (f_count - 1); b_count >= 0; b_count--)
	{
		_putchar(s[b_count]);
	}
	_putchar('\n');
}
