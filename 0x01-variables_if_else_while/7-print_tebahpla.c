#include <stdio.h>
/**
 * main - starting of the  code
 *
 * Return: 0 (sucess)
 */
int main(void)
{
	char low;

	for (low = 'z'; low >= 'a'; low--)
		putchar(low);
		putchar('\n');
	return (0);
}
