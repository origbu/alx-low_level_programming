#include "main.h"
/**
 * print_square-prints a square
 * @size:size of square
 *
 * Return:void
 */
void print_square(int size)
{
	int i, j;

	if (size <= 0)
	{
		_putchar('\n')
	}
	else
	{
		for (i = 1; i <= size; i++)
		{
			_putchar('#');
			for (j = 2; j <= size; j++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
