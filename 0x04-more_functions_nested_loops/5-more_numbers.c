#include "main.h"
/**
 * more_numbers-10 times the numbers, from 0 to 14
 *
 * Return:void
 */
void more_numbers(void)
{
	int i, r;

	for (r = 0; r < 10; r++)
	{
		for (i = 0; i <= 14; i++)
		{
			if (i >= 10)
			{
				_putchar((i / 10) + '0');
			}
			_putchar((i % 10) + '0');
		}
		_putchar('\n');
	}
}
