#include "main.h"
/**
 * print_alphabet_x10-prints 10 times the alphabet followed by a new line
 */
void print_alphabet_x10(void)
{
	int row;
	char ch;

	for (row = 0; row < 10; row++)
	{
		for (ch = 'a'; ch <= 'z'; ch++)
		{
			_putchar(ch);
		}
		_putchar('\n');
	}
}
