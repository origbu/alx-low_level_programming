#include <stdio.h>
/**
 * main - starting point of code
 *
 * Return: 0 (sucess)
 */
int main(void)
{
	char i;

	for (i = '0'; i <= '9'; i++)
	{
		putchar("%d", i);
		putchar('\n');
	}
	return (0);
}
