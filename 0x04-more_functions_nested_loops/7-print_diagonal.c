#include "main.h"
/**
 * print_diagonal-draws a diagonal line on the terminal
 * @n-input
 *
 * Return:void
 */
void print_diagonal(int n)
{
	int i, sp;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			for (sp = 1; sp < i; sp++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}
