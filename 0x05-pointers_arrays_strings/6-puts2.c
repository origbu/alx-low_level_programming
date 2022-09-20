/**
 * puts2-a function that prints every other character of a string
 * starting with the first character
 * followed by a new line.
 * @str:string input
 */
#include "main.h"

void puts2(char *str)
{
	int i;

	int i = 0;

	while (str[i] != '\0')
	{
		if ((i % 2) == 0)
		{
			_putchar(str[i]);
		}
		i++;
	}
	_putchar('\n');
}
