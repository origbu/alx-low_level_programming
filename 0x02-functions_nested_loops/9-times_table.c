#include "main.h"
/**
 * times_table-prints the 9 times table
 * row:rows
 * col:columns
 * pro:product of digits
 */
void times_table(void)
{
	int row, col, pro;

	for (row = 0; row <= 9; row++)
	{
		_putchar('0');
		_putchar(',');
		_putchar(' ');
	for (col = 0; col <= 9; col++)
	{
		pro = (row * col);
		if ((pro / 10) > 0)
		{
			_putchar((pro / 10) + '0');
		}
		else
		{
			_putchar(' ');
		}
		_putchar((pro % 10) + '0');

		if (col < 9)
		{
			_putchar(',');
			_putchar(' ');
		}
	}
	_putchar('\n');
	}
}
