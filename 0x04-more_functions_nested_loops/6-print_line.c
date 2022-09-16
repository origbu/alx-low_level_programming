#include "main.h"
/**
 * print_line-draws a straight line in the terminal
 * @n:input number of times to print '_'
 *
 * Return:a staright line
 */
void print_line(int n)
{
	int i;

	for (n <= 0)
	{
		_putchar('\n')
	}
	else
	{
		for (n = 1; n <= n; i++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
